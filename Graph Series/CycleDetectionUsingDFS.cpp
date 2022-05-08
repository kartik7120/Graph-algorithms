#include <iostream>
#include <vector>
using namespace std;

bool DetectCycle(vector<int> adj[], vector<bool> &visited, int node, int parent)
{
    visited[node] = true;

    vector<int>::iterator it;

    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!visited[*it])
        {
            visited[*it] = true;
            DetectCycle(adj, visited, *it, node);
            // current node is *it and parent of that node is 'node'
        }
        else if (*it != parent)
            return true;
    }
    return false;
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
            if (DetectCycle(adj, visited, i, -1))
            {
                cout << "Cycle detected\n";
            }
        }
    }
    return 0;
}