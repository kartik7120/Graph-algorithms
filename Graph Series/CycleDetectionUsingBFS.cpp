#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool DetectCycle(vector<int> adj[], vector<bool> &visited, int node)
{
    queue<pair<int, int>> q;
    q.push({node, -1});
    visited[node] = true;

    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();
        int currNode = node.first;
        int parentNode = node.second;
        vector<int>::iterator it;
        for (it = adj[currNode].begin(); it != adj[currNode].end(); it++)
        {
            if (!visited[*it])
            {
                visited[*it] = true;
                q.push({*it, currNode});
            }
            else
            {
                if (parentNode != *it)
                    return true;
            }
        }
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
            if (DetectCycle(adj, visited, i))
            {
                cout << "Cycle detected\n";
                break;
            }
        }
    }

    return 0;
}