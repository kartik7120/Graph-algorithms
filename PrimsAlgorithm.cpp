#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int selectMinVertex(vector<int> &value, vector<bool> &setMST, int n, int m)
{
    int minimum = INT_MAX;
    int vertex;
    for (int i = 0; i < n; i++)
    {
        if (setMST[i] == false && value[i] < minimum)
        {
            vertex = i;
            minimum = value[i];
        }
    }
    return vertex;
}

void printMST(vector<vector<int>>& adj, int n, int m)
{
    int parent[n];
    vector<int> value(n, INT_MAX);
    vector<bool> setMST(n, false);

    parent[0] = -1;
    value[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int u = selectMinVertex(value, setMST, n, m);

        setMST[u] = true;

        for (int j = 0; j < n; j++)
        {
            if (adj[u][j] != 0 && setMST[j] = false && adj[u][j] < value[j])
            {
                value[j] = adj[u][j]; 
                parent[j] = u;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cost = 0;

    cout << cost << '\n';

    return 0;
}