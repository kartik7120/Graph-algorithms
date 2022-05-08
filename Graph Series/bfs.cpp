#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<int> adj[], vector<bool> &visited, vector<int> &ans)
{
    queue<int> q;
    q.push(0);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        vector<int>::iterator it;
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            if (!visited[*it])
            {
                visited[*it] = true;
                q.push(*it);
            }
        }
    }
}

int main()
{
    int n, m;
    // n is number of vertices and m is number of edges
    cout << "Enter the number of vertices\n";
    cin >> n;
    cout << "Enter the number of edges\n";
    cin >> m;

    cout << "Enter the graph\n";

    vector<int> adj[n + 1]; // Adjecency List

    for (int i = 0; i < m; i++)
    {
        int u, v; // two vertices are connected by an edge
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);
    vector<int> ans;
    for (int i = 0; i < n + 1; i++)
    {
        if (!visited[i])
            bfs(adj, visited, ans);
    }

    cout << "BFS traversal of a graph\n";

    for (int i = 0; i < n + 1; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}