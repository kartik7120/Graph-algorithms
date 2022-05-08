// Topological sorting is the linear ordering of vertices such that there is an edge u -> v where u appers before v in that ordering
// Topological sorting is only possible for DAG or directed acyclic graph

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

stack<int> st;

void TopologicalSort(vector<int> adj[], vector<bool> &visited, int node, int parent)
{
    visited[node] = true;

    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!visited[*it])
        {
            // visited[*it] = true;
            TopologicalSort(adj, visited, *it, node);
        }
    }
    st.push(node);
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

    vector<bool> visited(n + 1, false);

    for (int i = 0; i < n + 1; i++)
    {
        if (!visited[i])
        {
            TopologicalSort(adj, visited, i, -1);
        }
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}