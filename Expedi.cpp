#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        int l, pq;
        cin >> l >> pq;

        for (int i = 0; i < n; i++)
        {
            a[i].first = l - a[i].first;
        }

        sort(a.begin(), a.end());

        int ans = 0;
        int curr = pq;
        bool flag = 0;
        priority_queue<int, vector<int>> p;

        for (int i = 0; i < n; i++)
        {
            if (curr >= l)
            {
                break;
            }

            while (curr < a[i].first)
            {
                if (p.empty())
                {
                    flag = 1;
                    break;
                }
                ans++;
                curr += p.top();
                p.pop();
            }


            if (flag == 1)
                break;

                p.push(a[i].second);
        }

        if(flag)
        {
            cout<<"-1"<<endl;
            continue;
        }

        while(!p.empty() && curr<l)
        {
            curr+=p.top();
            p.pop();
            ans++;
        }

        if(curr < l)
        {
            cout<<"-1"<<endl;
            continue;
        }

        cout<<ans<<'\n';
    }
    return 0;
}