#include <iostream>
#include <vector>
using namespace std;

bool BipartiteGraph(vector<int> adj[], vector<int> &colored, int node, int parent)
{
    colored[node] = 0;

    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (colored[*it] == -1)
        {
            if (colored[node] == 0)
                colored[*it] = 1;
            else if (colored[node] == 1)
                colored[*it] = 1;
            BipartiteGraph(adj, colored, *it, node);
        }
        else if (colored[*it] == colored[parent])
            return false;
    }
    return true;
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
        adj[v].push_back(u);
    }

    vector<int> colored(n + 1, -1);

    for (int i = 0; i < n + 1; i++)
    {
        if (colored[i] == -1)
        {
            if (BipartiteGraph(adj, colored, i, -1))
            {
                cout << "Bipartite graph";
                break;
            }
            else
                break;
        }
    }
    return 0;
}