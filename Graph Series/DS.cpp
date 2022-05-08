#include <iostream>
#include <vector>
using namespace std;

void make_set(int v, vector<int> &parent, vector<int> &size)
{
    parent[v] = -1;
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
    vector<vector<int>> edge;
    vector<int> parent(n + 1, -1);
    vector<int> size(n + 1, 0);

    for (int i = 0; i < n + 1; i++)
    {
        make_set(i, parent, size);
    }

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        edge.push_back({u, v});
        edge.push_back({v, u});
    }

    for (auto it : edge)
    {
        int u = it[0];
        int v = it[1];

        int a = find_set(u, parent, size);
        int b = find_set(v, parent, size);

        if(a!=b)
        {
            union_set(u,v,parent,size);
        }
    }

    return 0;
}