#include <iostream>
#include <vector>
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

void union_set(int u, int v, vector<int> &size, vector<int> &parent)
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
    cin >> n >> m;

    vector<vector<int>> edge;
    vector<int> parent(n, -1);
    vector<int> size(n, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        edge.push_back({u, v});
    }
    bool cycle = false;
    for (auto i : edge)
    {
        int u = i[0];
        int v = i[1];
        int x = find_set(u, size, parent);
        int y = find_set(v, size, parent);
        if (x == y)
        {
            cycle = true;
        }
        else
        {
            union_set(u, v, size, parent);
        }
    }

    if (cycle)
        cout << "Cycle is present\n";
    else
        cout << "Cycle is not present\n";
    return 0;
}