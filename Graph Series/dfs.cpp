#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<int> adj[], vector<bool> &visited, int node)
{
    visited[node] = 1;
    cout << node << " ";

    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!visited[*it])
        {
            visited[*it] = true;
            dfs(adj, visited, *it);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);

    for (int i = 0; i < n + 1; i++)
    {
        if (!visited[i])
        {
            dfs(adj, visited, i);
        }
    }
    return 0;
}