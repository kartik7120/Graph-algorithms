#include <iostream>
#include <vector>
using namespace std;

void Build(vector<int> &Tree, vector<int> &arr, int node, int start, int end)
{
    if (start == end)
    {
        Tree[node] = arr[end];
        return;
    }

    int mid = (start + end) / 2;
    Build(Tree, arr, node * 2, start, mid);
    Build(Tree, arr, node * 2 + 1, mid + 1, end);

    Tree[node] = max(Tree[node * 2], Tree[node * 2 + 1]);
}

void Query(vector<int>&Tree,vector<int>&arr,int node,int start,int end,int index)
{
    
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    return 0;
}