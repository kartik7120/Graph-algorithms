#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

void PrimAlgo(vector<pair<int, int>> adj[], int n, int &cost)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> parent(n + 1, -1);
    vector<int> key(n + 1, 10e4);
    vector<int> setMST(n + 1, false);

    key[0] = -1;
    parent[0] = -1;
    pq.push({0, 0});

    while (!pq.empty())
    {
        int u = pq.top().second;
        // int w = pq.top().first;
        pq.pop();

        setMST[u] = true;

        for (auto it : adj[u])
        {
            int v = it.first;
            int weight = it.second;
            if (setMST[v] == false && weight < key[v])
            {
                parent[v] = u;
                key[v] = weight;
                pq.push({key[v], v});
            }
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        if (key[i] != -1)
            cost += key[i];
    }
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
        adj[v].push_back({u, w});
    }

    int cost = 0;
    PrimAlgo(adj, n, cost);
    cout << cost << '\n';
    return 0;
}