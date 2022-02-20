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
    while (!s.empty())
    {
        pair<int, int> temp = *(s.begin());
        int u = temp.second;
        s.erase(temp);
        for (auto it : graph[u])
        {
            int v = it.first;
            int w = it.second;
            if (dist[v] > dist[u] + w)
            {
                s.erase({dist[v], v});
                dist[v] = dist[u] + w;
                s.insert({dist[v], v});
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        if (dist[i] != INT_MAX)
            cout << dist[i] << " ";
    }
    return 0;
}
/*
Enter the number of vertices
9
Enter the number of edges
14
0 1 4
0 7 8
1 7 11
1 2 8
7 8 7
7 6 1
8 6 6
2 8 2
2 5 4
6 5 2
2 3 7
3 5 14
3 4 9
5 4 10
Enter the source
0
Answer -:
0 4 12 19 21 11 9 8 14 
*/