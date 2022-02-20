#include <vector>
#include <queue>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int ladders, snakes;
    cin >> ladders >> snakes;

    map<int, int> lad;
    map<int, int> snak;

    for (int i = 0; i < ladders; i++)
    {
        int u, v;
        cin >> u >> v;
        lad[u] = v;
    }

    for (int i = 0; i < snakes; i++)
    {
        int u, v;
        cin >> u >> v;
        snak[u] = v;
    }
    int moves = 0;
    queue<int> q;
    q.push(1);

    bool found = false; // to indicate that we have reached 100
    vector<int> visited(101, 0);
    visited[1] = 1;
    while (!q.empty() and !found)
    {
        int size = q.size();
        while (size--)
        {
            int t = q.front();
            q.pop();
            for (int die = 1; die <= 6; die++)
            {
                if (t + die == 100)
                    found = true;
                if (t + die <= 100 and lad[t + die] and !visited[lad[t + die]])
                {
                    visited[lad[t + die]] = true;
                    if (lad[t + die] == 100)
                        found = true;
                    q.push(lad[t + die]);
                }
                else if (t + die <= 100 and snak[t + die] and !visited[snak[t + die]])
                {
                    visited[snak[t + die]] = true;
                    if (snak[t + die] == 100)
                        found = true;
                    q.push(snak[t + die]);
                }
                else if (t + die <= 100 and !snak[t + die] and !lad[t + die] and !visited[t + die])
                {
                    visited[t + die] = true;
                    q.push(t + die);
                }
            }
        }
        moves++;
    }

    if (found)
        cout << moves << '\n';
    else
        cout << -1 << '\n';

    return 0;
}