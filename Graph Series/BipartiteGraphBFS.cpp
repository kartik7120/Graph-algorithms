// A graph is called bipartite graph that can be colored using ONLY 2 colors assuming that no two graphs will have the same colors

// If cycle length of a graph is odd then it cannot be a bipartite graph

// If a graph does not have a odd cycle (It does not mean that graph has to have a even graph) can be bipartite graph

// For the algorithm we will take a color array and the two colors that we have are 0 and 1

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool BipartiteGraph(vector<int> adj[], vector<int> &colored, int node)
{
    queue<int> q;
    q.push(node);
    colored[node] = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        vector<int>::iterator it;
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            if (colored[*it] == -1)
            {
                if (colored[node] == 1)
                    colored[*it] = 0;
                else if (colored[node] == 0)
                    colored[*it] = 1;
                q.push(*it);
            }
            else if (colored[*it] == colored[node])
                return false;
        }
    }
    return true;
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

    vector<int> colored(n + 1, -1);

    for (int i = 0; i < n + 1; i++)
    {
        if (BipartiteGraph(adj, colored, i))
        {
            cout << "Bipartite Graph\n";
            break;
        }
        else
            break;
    }

    for (int i = 0; i < n + 1; i++)
    {
        cout << colored[i] << " ";
    }
    return 0;
}