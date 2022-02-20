#include <iostream>
#include <vector>
using namespace std;

void BuildSegmentTree(vector<int> &Tree, vector<int> &arr, int node, int start, int end)
{
    if (start == end)
    {
        Tree[node] = arr[start];
        return;
    }

    int mid = (start + end) / 2;
    BuildSegmentTree(Tree, arr, node * 2, start, mid);
    BuildSegmentTree(Tree, arr, node * 2 + 1, mid + 1, end);

    Tree[node] = Tree[node * 2] + Tree[node * 2 + 1];
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> Tree(n * 4, 0);
    BuildSegmentTree(Tree, arr, 1, 0, n - 1);
    for (int i = 1; i < n * 4; i++)
        cout << Tree[i] << " ";
    return 0;
}