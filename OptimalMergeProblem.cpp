#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    priority_queue<int,vector<int>,greater<int>> p;

    for(int i=0;i<n;i++)
    {
        p.push(arr[i]);k
    }

    int ans=0;

    while(p.size()>1)
    {
        int e1=p.top();
        p.pop();
        int e2=p.top();
        p.pop();
        ans+=e1+e2;
        p.push(e1+e2);
    }

    cout<<ans<<'\n';
    return 0;
}