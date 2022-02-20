#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        if ((m[arr[i]] == 0 && m.size() == (k + 1)))
        break;
        m[arr[i]]++;
    }

    vector<pair<int, int>> v;

    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        v.push_back({it->first, it->second});
    }

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    vector<pair<int, int>>::iterator it1;
    for (it1 = v.begin(); it1 != v.end(); it1++)
    {
        if(it1->second!=0)
        cout<<it1->first<<" ";
    }

    return 0;
}