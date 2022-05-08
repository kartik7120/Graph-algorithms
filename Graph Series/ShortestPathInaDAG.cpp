#include <iostream>
#include <vector>
#include <climits>
#include <stack>
using namespace std;

// First step for finding shortest path in a DAG

// Step 1 -> Find the topological sort for DAG

// Step 2 -> Store the elements of the toposort in a stack

// Step 3 -> Make a distance and initailize it with infinity

// Step 4 -> Take out the first element from the stack and and check if the distance of that element is not infinity which means that node has been visited

stack<int> st;

void ShortestPath(vector<pair<int, int>> adj[], int source, vector<int> &distance, int n)
{
    distance[source] = 0;

    vector<pair<int, int>>::iterator it;
    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if (distance[node] != INT_MAX)
        {
            for (it = adj[node].begin(); it != adj[node].end(); it++)
            {
                if (distance[node] + (*it).second < distance[(*it).first])
                {
                    distance[(*it).first] = distance[node] + distance[(*it).second];
                }
            }
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        if (distance[i] != INT_MAX)
        {
            cout << distance[i] << " ";
        }
        else
            cout << "INF"
                 << " ";
    }
}

void toposort(vector<pair<int, int>> adj[], vector<bool> &visited, int source)
{
    visited[source] = true;
    // st.push(source);

    vector<pair<int, int>>::iterator it;

    for (it = adj[source].begin(); it != adj[source].end(); it++)
    {
        if (!visited[(*it).first])
        {
            visited[(*it).first] = true;
            toposort(adj, visited, (*it).first);
        }
    }
    st.push((*it).first);
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        // adj[v].push_back({u, w});
    }
    vector<bool> visited(n + 1, false);
    vector<int> distance(n + 1, INT_MAX);
    for (int i = 0; i < n + 1; i++)
    {
        if (!visited[i])
        {
            toposort(adj, visited, i);
        }
    }

    ShortestPath(adj, 0, distance, n);

    return 0;
}