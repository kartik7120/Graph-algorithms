#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of vertices\n";
    cin >> n;
    cout << "Enter the number of edges\n";
    cin >> m;

    vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }

    queue<int> q;
    q.push(1);

    vector<int> ans;
    ans.push_back(1);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";

        vector<int>::iterator it;
        for (it = arr[node].begin(); it != arr[node].end(); it++)
        {
        }
    }
    return 0;
}