#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int count = 0;
void toposort(vector<int> adj[], vector<int> &indegree, int n, vector<bool> &visited)
{
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int node = q.front();
        visited[node] = true;
        count++;
        q.pop();
        vector<int>::iterator it;
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            indegree[*it]--;
            if (indegree[*it] == 0)
                q.push(*it);
        }
    }

    if (count != n)
        cout << "Cycle is present\n";
    else
        cout << "Cycle is not present";
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
    }

    // vector<bool> visited(n + 1, false);
    vector<int> indegree(n + 1, 0);
    vector<int>::iterator it;

    for (int i = 0; i < n + 1; i++)
    {
        for (it = adj[i].begin(); it != adj[i].end(); it++)
        {
            indegree[*it]++;
        }
    }
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < n + 1; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            toposort(adj, indegree, n + 1, visited);
        }
    }
    return 0;
}