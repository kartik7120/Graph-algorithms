#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void make_set(int v, vector<int> &size, vector<int> &parent)
{
    parent[v] = v;
    size[v] = 1;
}

int find_set(int v, vector<int> &size, vector<int> &parent)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v], size, parent);
}

void union_sets(int u, int v, vector<int> &size, vector<int> &parent)
{
    int a = find_set(u, size, parent);
    int b = find_set(v, size, parent);

    if (a != b)
    {
        if (size[a] < size[b])
        {
            swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter the number of vertices\n";
    cin >> n;
    cout << "Enter the number of edges\n";
    cin >> m;

    // vector<int> adj[n];
    vector<vector<int>> edges;
    vector<int> size(n, 0);
    vector<int> parent(n, -1); // -1 means that a vectex is the parent of the node
    for (int i = 0; i < n; i++)
    {
        make_set(i, size, parent);
    }
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({w, u, v});
    }
    //he put weight before vertices, and sort function sort on the basis of first value which in this case is weight of the edges i.e. w
    sort(edges.begin(), edges.end());
    bool cycle = false;
    int cost = 0;
    for (auto i : edges)
    {
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = find_set(u, size, parent);
        int y = find_set(v, size, parent);

        if (x == y)
        {
            continue;
        }
        else
        {
            cout << u << " " << v << '\n';
            cost += w;
            union_sets(x, y, size, parent);
        }
    }

    cout << cost << '\n';
    return 0;
}