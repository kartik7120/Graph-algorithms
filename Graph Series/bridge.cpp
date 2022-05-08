// Those edges are called bridges if after removal of those edges the graph is broken into one or more components

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(int node, int parent, vector<bool> &visited, vector<int> &visitingTime, vector<int> &currentVisitingTime, int &timer, vector<int> adj[])
{
    visited[node] = true;
    timer++;
    visitingTime[node] = timer;
    currentVisitingTime[node] = timer;
    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!visited[*it])
        {
            visited[*it] = true;
            dfs(*it, node, visited, visitingTime, currentVisitingTime, timer, adj);
            currentVisitingTime[node] = min(visitingTime[node], visitingTime[*it]);
            if (currentVisitingTime[*it] > visitingTime[node])
            {
                cout << node << " " << *it <<"\n";
            }
            else
            {
                currentVisitingTime[node] = min(currentVisitingTime[node], visitingTime[*it]);
            }
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
    vector<int> visitingTime(n + 1, -1);
    vector<int> currentVisitingTime(n + 1, -1);

    int timer = 0;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, -1, visited, visitingTime, currentVisitingTime, timer, adj);
        }
    }
    return 0;
}