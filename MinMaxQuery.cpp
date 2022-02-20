#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void BuildMaxSegmentTree(vector<int> &arr, vector<int> &Tree, int node, int start, int end)
{
    if (start == end)
    {
        Tree[node] = arr[start];
        return;
    }

    int mid = (start + end) / 2;
    BuildMaxSegmentTree(arr, Tree, node * 2, start, mid);
    BuildMaxSegmentTree(arr, Tree, node * 2 + 1, mid + 1, end);

    Tree[node] = max(Tree[node * 2], Tree[node * 2 + 1]);
}

int Query(vector<int> &Tree, int node, int start, int end, int l, int r)
{
    if (start > r || end < l)
        return INT_MIN;

    if (start >= l && end <= r)
    {
        return Tree[node];
    }

    int mid = (start + end) / 2;

    int q1 = Query(Tree, node * 2, start, mid, l, r);
    int q2 = Query(Tree, node * 2 + 1, mid + 1, end, l, r);

    return max(q1, q2);
}

void update(vector<int> &Tree, vector<int> &arr, int node, int start, int end, int index, int value)
{
    if (start == end)
    {
        arr[start] = value;
        Tree[node] = value;
        return;
    }

    int mid = (start + end) / 2;
    if (index <= mid)
    {
        update(Tree, arr, node * 2, start, mid, index, value);
    }
    else
    {
        update(Tree, arr, node * 2 + 1, mid + 1, end, index, value);
    }

    Tree[node] = max(Tree[node * 2], Tree[node * 2 + 1]);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> Tree(n * 4, 0);
    BuildMaxSegmentTree(arr, Tree, 1, 0, n - 1);
    cout << Query(Tree, 1, 0, n - 1, 2, 6);
    cout << '\n';
    update(Tree, arr, 1, 0, n - 1, 7, 18);

    cout << '\n';
    cout << Query(Tree, 1, 0, n - 1, 0, n - 1);
    return 0;
}