#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // vector<pair<int, int>> adj[n + 1];
    vector<vector<int>> edges(n + 1);

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        edges.push_back({u, v, w});
    }

    vector<int> distance(n + 1, INT_MAX);
    int source;
    cin >> source;
    distance[source] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (auto j : edges)
        {
            int u = j[0];
            int v = j[1];
            int w = j[2];
            distance[v] = min(distance[v], distance[u] + w);
        }
    }

    for (auto i : distance)
    {
        cout << i << " ";
    }

    return 0;
}

// 7
// 10
// 1 2 6
// 2 5 -1
// 5 7 3
// 3 5 1
// 3 2 -2
// 1 4 5
// 4 6 -1
// 6 7 3
// 1 3 5
// 4 3 -2