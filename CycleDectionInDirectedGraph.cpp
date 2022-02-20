#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool isCycle(vector<int> adj[], vector<bool> &visited, int source, vector<int> stack)
{
    stack[source] = true;
    if (!visited[source])
    {
        visited[source] = true;
        for (auto i : adj[source])
        {
            if (!visited[i] and isCycle(adj, visited, i, stack))
                return true;
            if (stack[i])
                return true;
        }
    }
    stack[source]=false;
    return false;
}

int main()
{
    int m, n;
    cout << "Enter the number of vertices\n";
    cin >> n;
    cout << "Enter the number of edges\n";
    cin >> m;

    vector<int> adj[n];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }

    bool cycle = false;
    vector<int> stack(n, 0);
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] and isCycle(adj, visited, i, stack))
        {
            cycle = true;
        }
    }

    if (cycle)
    {
        cout << "Cycle is detected\n";
    }
    else
        cout << "Cycle is not detected\n";
    return 0;
}