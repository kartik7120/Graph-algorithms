#include <iostream>
#include <queue>
using namespace std;

using pii = pair<int, pair<int, int>>;

int main()
{
    priority_queue<pii, vector<pii>, greater<pii>> p;

    vector<vector<int>> arr;
    arr = {{2, 6, 12},
           {1, 9},
           {23, 34, 90, 2000}};

    vector<int> ans;
    int idxpop = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        p.push({arr[i][0], {i, 0}});
    }

    while (p.size() != 0)
    {
        pii temp = p.top();
        p.pop();

        int i = temp.second.first;
        int j = temp.second.second;
        ans.push_back(temp.first);

        if (j + 1 < arr[i].size())
        {
            p.push({arr[i][j + 1], {i, j + 1}});
        }
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}