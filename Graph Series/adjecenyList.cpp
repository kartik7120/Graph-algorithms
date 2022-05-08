#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < n + 1; i++)
    {
        // int temp = adj[i];

        for (auto x : adj[i])
        {
            cout << i << " -> " << x;
        }
        cout << '\n';
    }
    return 0;
}