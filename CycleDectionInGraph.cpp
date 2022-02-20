#include <iostream>
#include <vector>
using namespace std;
//https://www.geeksforgeeks.org/detect-cycle-undirected-graph/

bool isCycle(vector<int> adj[], vector<bool> visited, int parent, int source)
{
    visited[source] = true;
    for (auto i : adj[source])
    {
        if (i != parent)
        {
            if (visited[i])
            {
                return true;
            }
            if (!visited[i] and isCycle(adj, visited, source, i))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int m;
    int n;
    cout << "Enter the number of vertices\n";
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

    bool cycle = false;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] and isCycle(adj, visited, -1, i))
        {
            cycle = true;
        }
    }

    if (cycle)
    {
        cout << "Cycle detected\n";
    }
    else
        cout << "Cycle not detected\n";

    return 0;
}