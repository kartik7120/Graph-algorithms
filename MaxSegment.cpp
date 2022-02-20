#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
using namespace std;

int maxVal = INT_MIN;

void Build(vector<int> &arr, vector<int> &Tree, int node, int start, int end)
{
    if (start == end)
    {
        Tree[node] = arr[start];
        return;
    }

    int mid = (start + end) / 2;
    Build(arr, Tree, node * 2, start, mid);
    Build(arr, Tree, node * 2 + 1, mid + 1, end);

    Tree[node] = Tree[node * 2] + Tree[node * 2 + 1];
}

int Query(vector<int> &Tree, vector<int> &arr, int node, int start, int end, int l, int r)
{
    if (start > r || end < l)
    {
        maxVal = 0;
        return 0;
    }

    if (start >= l && end <= r)
    {
        maxVal = max(maxVal, Tree[node]);
        return Tree[node];
    }

    int mid = (start + end) / 2;
    int q1 = Query(Tree, arr, node * 2, start, mid, l, r);
    int q2 = Query(Tree, arr, node * 2, mid + 1, end, l, r);

    maxVal = max(maxVal, max(q1, q2));
    return q1 + q2;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> Tree(n * 4, 0);
    return 0;
}