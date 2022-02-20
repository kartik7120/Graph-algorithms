#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;

        v.push_back({start, end});
    }

    sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b)
         { return a[1] < b[1]; });

    for (auto i : v)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout<<endl;
    }

    int take = 1;
    int end = v[0][1];//15
    for (int i = 0; i < n; i++)
    {
        if (v[i][0] >= end) // 12
        {
            take++;
            end = v[i][1];
        }
    }

    printf("%d\n", take);
    return 0;
}