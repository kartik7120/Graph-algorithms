#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> m; // value and count

    int prefix = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        prefix += v[i];
        m[prefix]++;
    }
 
    int ans=0;
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        int c=it->second;
        ans+=(c*(c-1))/2;

        if(it->first==0)
        {
            ans+=it->second;
        }
    }

    cout<<ans<<'\n';
    return 0;
}