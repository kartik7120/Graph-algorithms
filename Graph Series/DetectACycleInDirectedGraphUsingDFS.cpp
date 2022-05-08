
// Idea is that if  both the nodes in the visited array and dfsVisited array then there will exit a cycle in a directed graph 
#include <iostream>

#include <vector>
using namespace std;

bool DetectCycle(vector<int> adj[], vector<bool> &visited, vector<bool> dfsvisited, int node, int parent)
{
    visited[node] = true;
    dfsvisited[node] = true;

    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!visited[*it])
        {
            visited[*it] = true;
            dfsvisited[*it] = true;
            DetectCycle(adj, visited, dfsvisited, *it, node);
        }
        else if (visited[*it] == true && dfsvisited[*it] == true)
            return true;
    }
    return false;
}

int main()
{
    int m, n;
    cin >> n >> m;

    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        // adj[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);
    vector<bool> dfsvisited(n + 1, false);

    for (int i = 0; i < n + 1; i++)
    {
        if (!visited[i])
        {
            if (DetectCycle(adj, visited, dfsvisited, i, -1))
            {
                cout << "Cycle detected\n";
                break;
            }
            else
                break;
        }
    }
    return 0;
}