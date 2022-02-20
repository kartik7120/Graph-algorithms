#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Topological sort can only be implemented in DAG and if we do not get any topological sort pattern means that our graph has a cycle 

int main()
{
    int n, m;
    cout << "Enter the number of vertices\n";
    cin >> n;
    cout << "Enter the number of edges\n";
    cin >> m;

    vector<int> adj[n];
    vector<int> indegee(n,0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // u --> v 
        adj[u].push_back(v);
        indegee[v]++; // since u is directed to v thus indegree of v is increasing
    }

    queue<int> q; //used to store out topological order
    for(int i=0;i<n;i++)
    {
        if(indegee[i] == 0)
        {
            q.push(i);
        }
    }

    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        // x --> v

        for(auto it:adj[x])
        {
            indegee[it]--;
            if(indegee[it]==0)
            {
                q.push(it);
            }
        }
    }
    return 0;
}