#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> adj(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> adj[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 or i == n - 1 or j == 0 or j == m - 1)
            {
                if (adj[i][j] == 'O')
                    adj[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!(i == 0 or i == n - 1 or j == 0 or j == m - 1))
            {
                if (adj[i][j] == 'O')
                    adj[i][j] = 'X';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (adj[i][j] == '*')
                adj[i][j] = 'X';
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
}