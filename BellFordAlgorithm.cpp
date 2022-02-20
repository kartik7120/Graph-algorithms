#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of vertices\n";
    cin >> n;
    cout << "Enter the number of edges\n";
    cin >> m;

    vector<int> dist(n + 1, INT_MAX);
    vector<vector<int>> edges(n + 1);

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int source = 0;
    cout << "Enter the source\n";
    cin >> source;
    dist[source] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (auto j : edges)
        {
            int u=j[0];
            int v=j[1];
            int w=j[2];
            dist[v]=min(dist[v],dist[u]+w);
        }
    }

    for(auto i:dist)
    {
        cout<<i<<" ";
    }
    return 0;
}