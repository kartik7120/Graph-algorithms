#include <vector>
#include <iostream>
#include <queue>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) //u and v are two vectices and we will connect them using a edge
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for (int i = 0; i < V; i++)
    {
        for (auto x : adj[i])
        {
            cout << x << " ";
        }
        cout << '\n';
    }
}

void BFS(vector<int> adj[], int V)
{
    bool visitedVertex[V]; // used to indicate the vecrices and the nodes that are begin visited

    for (int i = 0; i < V; i++)
    {
        visitedVertex[i] = false;
    }

    queue<int> q;
    visitedVertex[0] = true;
    q.push(0);

    while (!q.empty())
    {
        int node = q.front();
        cout << node << " ";
        q.pop();

        vector<int>::iterator it;
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            if (!visitedVertex[*it])
            {
                visitedVertex[*it] = true;
                q.push(*it);
            }
        }
    }
}

int main()
{
    int V = 4;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 3);
    printGraph(adj, V);
    cout << '\n';
    BFS(adj, V);
    return 0;
}