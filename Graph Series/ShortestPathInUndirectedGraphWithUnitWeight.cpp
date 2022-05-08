// When there is an unweighted graph then we assume that each edge has an unit weight

// We will always be given a constant source

// Initially we will take a distance array and initialize each node with infinity

// Finding shortest using BFS algorithm

// First take the source and push it in the stack and mark distance of source node be zero in distance array

#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

void ShortestPath(vector<int> adj[], vector<bool> &visited, int source, vector<int> &distance)
{
    visited[source] = true;
    queue<int> q;
    q.push(source);
    distance[source] = 0;

    vector<int>::iterator it;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            // if (!visited[*it])
            // {

            int dist = distance[node] + 1;
            if (dist < distance[*it])
            {
                distance[*it] = min(distance[*it], dist);
                q.push(*it);
            }
            // }
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
        adj[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);
    vector<int> distance(n + 1, INT_MAX);
    cout << "Enter the source node\n";
    int source;
    cin >> source;
    ShortestPath(adj, visited, source, distance);
    cout << "Distance :-\n";

    for (int i = 0; i < n + 1; i++)
    {
        cout << distance[i] << " ";
    }
    return 0;
}