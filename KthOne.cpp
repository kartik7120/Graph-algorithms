#include <iostream>
#include <vector>
using namespace std;

void Build(vector<int> &Tree, vector<int> &arr, int node, int start, int end)
{
    if (start == end)
    {
        Tree[node] = arr[start];
        return;
    }

    int mid = (start + end) / 2;

    Build(Tree, arr, node * 2, start, mid);
    Build(Tree, arr, node * 2 + 1, mid + 1, end);

    Tree[node] = Tree[node * 2] + Tree[node * 2 + 1];
}

void Update(vector<int> &Tree, vector<int> &arr, int node, int start, int end, int index)
{
    if (start == end)
    {
        arr[start] = arr[start] xor 1;
        Tree[node] = Tree[node] xor 1;
        return;
    }

    int mid = (start + end) / 2;
    Update(Tree, arr, node * 2, start, mid, index);
    Update(Tree, arr, node * 2 + 1, mid + 1, end, index);
}

int Find(vector<int> &Tree, int node, int start, int end, int k)
{
    if (start == end)
        return start;

    int mid = (start + end) / 2;

    if (Tree[node * 2] >= k)
    {
        return Find(Tree, node * 2, start, mid, k);
    }
    else
        return Find(Tree, node * 2 + 1, mid + 1, end, k);
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int q;
    cin >> q;

    while (q--)
    {
        int k;
        cin >> k;

        // int c = FindIndex(arr, k);
        // cout << c << '\n';
    }
    return 0;
}

//int FindIndex(vector<int> &arr, int k)
//{
//    for (int i = 0; i < arr.size(); i++)
//    {
//        if (arr[i] == 1)
//            k--;
//        if (k == 0)
//            return i;
//    }
//}
//
//int Update(vector<int> &arr, int index)
//{
//    for (int i = 0; i <= index; i++)
//    {
//        if (i == index)
//        {
//            arr[i] = arr[i] xor 1;
//        }
//    }
//}