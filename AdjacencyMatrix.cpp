#include<iostream>
#include<vector>
using namespace std;
//https://www.geeksforgeeks.org/graph-and-its-representations/

int main()
{
    int n,m;
    cout<<"Enter the number of vertices\n";
    cin>>n;
    cout<<"Enter the number of edges\n";
    cin>>m;

    vector<vector<int>> adjm((n+1),vector<int>(n+1,0));

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        adjm[u][v]=1;
        adjm[v][u]=1;
    }

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<adjm[i][j]<<" ";
        }
        cout<<'\n';
    }

    // Find out if two nodes of have a edges between them

    if(adjm[3][7]==1)
    cout<<"There is an edge\n";
    else
    cout<<"No"<<'\n';

    //Adjaceny List

    vector<int> adj(n+1); 
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1;i<n+1;i++)
    {
        cout<<i<<" -> ";
        for(auto x:adj[i])
        {
            cout<<x<<" ";
        }
        cout<<'\n';
    }
    return 0;
}