#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void make_set(int v, vector<int> &parent, vector<int> &size)
{
    parent[v] = v;
    size[v] = 1;
}

int find_set(int v, vector<int> &parent, vector<int> &size)
{
    if (v == parent[v])
        return v;

    return parent[v] = find_set(parent[v], parent, size);
}

void union_set(int u, int v, vector<int> &parent, vector<int> &size)
{
    int a = find_set(u, parent, size);
    int b = find_set(v, parent, size);

    if (a != b)
    {
        if (size[a] < size[b])
        {
            swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
        else
        {
            parent[b] = a;
            size[a] += size[b];
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    // vector<int> adj[n + 1];
    vector<vector<int>> adj;

    vector<int> parent(n + 1, -1);
    vector<int> size(n + 1, 0);
    for (int i = 0; i < n + 1; i++)
    {
        make_set(i, parent, size);
    }

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj.push_back({w, u, v});
        // adj.push_back({w,u,v});
    }

    sort(adj.begin(), adj.end());
    vector<int> ans;

    for (auto it : adj)
    {
        auto w = it[0];
        auto u = it[1];
        auto v = it[2];

        int a = find_set(u, parent, size);
        int b = find_set(v, parent, size);

        if (a != b)
        {

            cout << u << " -> " << v << " cost : " << w << '\n';
            union_set(u, v, parent, size);
        }
    }

    // for (auto i : ans)
    // {
    // cout << i << " ";
    // }
    return 0;
}

// 8
// 14
// 0 1 4
// 0 7 8
// 1 7 11
// 1 2 8
// 2 8 2
// 7 8 7
// 8 6 6
// 7 6 1
// 6 5 2
// 2 5 4
// 2 3 7
// 3 4 9
// 3 5 14
// 4 5 10

// 4
// 7
// 0 1 2
// 1 2 3
// 0 3 6
// 1 3 8
// 1 4 5
// 2 4 7
// 3 4 9
// 0 -> 1 cost : 2
// 1 -> 2 cost : 3
// 1 -> 4 cost : 5
// 0 -> 3 cost : 6