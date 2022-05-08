#include <iostream>
#include <vector>
#include <climits>
#include <stack>
using namespace std;

void toposort(vector<int> adj[], vector<bool> &visited, int node, stack<int> &st)
{
    visited[node] = true;
    st.push(node);

    vector<int>::iterator it;

    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!visited[*it])
        {
            visited[*it] = true;
            toposort(adj, visited, *it, st);
            st.push(*it);
        }
    }
}

// void toposort2(vector<int> adj[], vector<bool> &visited, int node)
// {
//     visited[node] = true;

//     vector<int>::iterator it;

//     for (it = adj[node].begin(); it != adj[node].end(); it++)
//     {
//         if (!visited[*it])
//         {
//             visited[*it] = true;
//             toposort2(adj2, visited, *it);

//         }
//     }
// }

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];
    vector<int> adj2[n + 1]; // reverse graph

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj2[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);
    stack<int> st;
    stack<int> st2;

    for (int i = 0; i < n + 1; i++)
    {
        if (!visited[i])
        {
            toposort(adj, visited, i, st);
        }
    }

    visited = vector<bool>(n + 1, false);

    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if (!visited[node])
        {
            toposort(adj2, visited, node, st2);
        }
    }

    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }

    return 0;
}

// Notes :-

// This algorithm helps to find strongly connected components in a graph

// Strongly connected component is a component in which you start from one node of that component and you can any other node of that component

// Three steps :-

// sort all the nodes in terms of their finishing time

// Transpose the graph -> reversing the direction of edges

// DFS according to the finishing time

// Time complecvity -> O(N + E)

// Space camplexcity -> O( N + E) + O( N ) + O( N )