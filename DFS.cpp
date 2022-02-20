#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void DFS(vector<int> adj[], bool visited[], int node)
{
    // preorder
    visited[node] = 1;
    cout << node << " ";

    //inorder
    vector<int>::iterator it;

    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!visited[*it])
        DFS(adj, visited, *it);
    }

    //Postorder
    //cout << node << " ";
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        for (auto x : adj[i])
        {
            cout << " -> " << x;
        }
        cout << '\n';
    }
}

int main()
{
    int n, m;
    cout << "Enter the number of vertices\n";
    cin >> n;
    cout << "Enter the number of edges\n";
    cin >> m;
    vector<int> adj[n + 1];

    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 5);
    addEdge(adj, 2, 6);
    addEdge(adj, 2, 7);
    addEdge(adj, 7, 3);
    // printGraph(adj, n);
    bool visited[n + 1];
    DFS(adj, visited, 1); // 1 is out root node

    return 0;
}