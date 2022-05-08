#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// First stepp of the algorithm is to write the indegree of each vertex
//  According to the kahn's algorithm the topological sort will start from the vertex which has a degree of 0

queue<int> q;
vector<int> ans;

void toposort(vector<int> adj[], vector<int> &indegree, vector<bool> &visited, int node, int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    while (!q.empty())
    {
        int node = q.front();
        cout << node << " ";
        q.pop();
        vector<int>::iterator it;
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            indegree[*it]--;
            if (indegree[*it] == 0)
                q.push(*it);
        }
    }
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

    vector<int>::iterator it;

    vector<int> indegree(n + 1, 0);

    for (int i = 0; i < n + 1; i++)
    {
        // if (indegree[i])
        for (it = adj[i].begin(); it != adj[i].end(); it++)
        {
            indegree[*it]++;
        }
    }

    vector<bool> visited(n + 1, false);
    toposort(adj, indegree, visited, 0, n);

    return 0;
}