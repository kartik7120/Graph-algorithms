#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std;

//https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-using-set-in-stl/

int main()
{
    int n, m;
    cout << "Enter the number of vertices\n";
    cin >> n;
    cout << "Enter the number of edges\n";
    cin >> m;

    vector<int> dist(n + 1, INT_MAX);
    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    int source;
    cout << "Enter the source\n";
    cin >> source;
    dist[source] = 0;

    set<pair<int, int>> s;
    s.insert({0, source});
    // { wt , vectex}

    while (!s.empty())
    {
        pair<int, int> temp = *(s.begin());
        s.erase(s.begin());

        int u = temp.second;

        for (auto it : graph[u])
        {
            auto v = it.first;
            auto w = it.second;
            if (dist[v] > dist[u] + w)
            {
                if (dist[v] != INT_MAX)
                {
                    s.erase(s.find({dist[v], v}));
                }
                dist[v] = dist[u] + w;
                s.insert({dist[v], v});
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        if(dist[i]!=INT_MAX)
        cout << dist[i] << " ";
    }
    return 0;
}