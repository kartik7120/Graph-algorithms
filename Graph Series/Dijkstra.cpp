#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std;

void Dijktra(vector<pair<int, int>> adj[], vector<int> &distance, int source, int n)
{
    set<pair<int, int>> s;
    distance[source] = 0;
    s.insert({0, source});
    while (!s.empty())
    {
        pair<int, int> temp = *(s.begin());
        s.erase(s.begin());
        int u = temp.second;
        for (auto it : adj[u])
        {
            int v = it.second;
            cout << v << " ";
            int w = it.first;
            if (distance[v] > distance[u] + w)
            {
                if (distance[v] != INT_MAX)
                {
                    s.erase(s.find({distance[v], v}));
                }
                distance[v] = distance[u] + w;
                s.insert({distance[v], v});
            }
        }
    }
    cout << "\nDistance shortest path from source -:\n";
    for (int i = 0; i < n + 1; i++)
    {
        if (distance[i] != INT_MAX)
        {
            cout << distance[i] << " ";
        }
        else
            cout << "INF ";
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

    vector<bool> visited(n + 1, false);
    vector<int> distance(n + 1, INT_MAX);
    int source;
    cin >> source;

    Dijktra(adj, distance, source, n);

    return 0;
}