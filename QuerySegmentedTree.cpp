#include <iostream>
#include <vector>
using namespace std;

void BuildTree(vector<int> &arr, vector<int> &Tree, int node, int start, int end)
{
    if (start == end)
    {
        Tree[node] = arr[start];
    }

    int mid = (start + end) / 2;
    BuildTree(arr, Tree, node * 2, start, mid);
    BuildTree(arr, Tree, node * 2 + 1, mid + 1, end);

    Tree[node] = Tree[node * 2] + Tree[node * 2 + 1];
}

int Query(vector<int> &Tree, int node, int start, int end, int l, int r)
{
    if (start > r || end < l)
        return 0;

    if (l <= start && end <= r)
        return Tree[node];

    int mid = (start + end) / 2;
    int q1 = Query(Tree, node * 2, start, mid, l, r);
    int q2 = Query(Tree, node * 2 + 1, mid + 1, end, l, r);

    return q1+q2;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> Tree(n * 4, 0);
    return 0;
}