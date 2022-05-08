#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> ans;

void dfs(int node, int parent, vector<bool> &visited, vector<int> &visitingTime, vector<int> &lowestVisitingTime, int &timer, vector<int> adj[])
{
    visited[node] = true;
    timer++;
    int child = 0;
    visitingTime[node] = timer;
    lowestVisitingTime[node] = timer;
    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (*it == parent)
            continue;

        if (!visited[*it])
        {
            visited[*it] = true;
            dfs(*it, node, visited, visitingTime, lowestVisitingTime, timer, adj);
            lowestVisitingTime[node] = min(lowestVisitingTime[node], lowestVisitingTime[*it]);
            if (lowestVisitingTime[*it] >= visitingTime[node] && parent != -1)
            {
                ans.push_back(node);
            }
            child++;
        }
        else
        {
            lowestVisitingTime[node] = min(lowestVisitingTime[node], visitingTime[*it]);
        }
    }

    if (parent == -1 && child > 1)
        ans.push_back(node);
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