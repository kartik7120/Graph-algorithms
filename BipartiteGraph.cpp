#include <iostream>
#include <vector>
using namespace std;

bool bipartite;

void color(int idx, int curr, vector<int> col, vector<bool> visited, vector<int> adj[])
{
    if (col[idx] != -1 and col[idx] != curr)
    {
        bipartite = false;
        return;
    }

    col[idx] = curr;

    if (visited[idx])
    {
        return;
    }

    visited[idx] = true;

    for (auto i : adj[idx])
    {
        color(i, curr xor 1, col, visited, adj); // 1 xor 0 = 1 and 1 xor 1 = 0
    }
}

int main()
{
    int n, m;
    cout << "Entre the number of vertices\n";
    cin >> n;
    cout << "Entre the number of edges\n";
    cin >> m;

    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bipartite = true;

    vector<bool> visited(n, false);

    vector<int> col(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            color(i, 0, col, visited, adj);
    }

    if (bipartite)
    {
        cout << "Graph is bipartite\n";
    }
    else
        cout << "Graph is not bipartite\n";
    return 0;
}