#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    //int m, n;
    //cout << "Enter the number of edges\n";
    //cin >> n;
    //cout << "Enter the number of vertices\n";
    //cin >> m;

    vector<vector<int>> graph = {{0, 5, INT_MAX, 10},
                                 {INT_MAX, 0, 3, INT_MAX},
                                 {INT_MAX, INT_MAX, 0, 1},
                                 {INT_MAX, INT_MAX, INT_MAX, 0}};

    int n = graph.size();
    // vector<int> dist(n, 0);
    vector<vector<int>> dist = graph;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                if (dist[i][k] + dist[k][j] < dist[i][j])
                dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dist[i][j] == INT_MAX)
            {
                cout << "INF" << " ";
            }
            else
                cout << dist[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}