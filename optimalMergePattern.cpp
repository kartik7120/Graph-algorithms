#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    priority_queue<int,vector<int>> p;
    for(int i=0;i<n;i++)
    {
        p.push(arr[i]);
    }

    int sum=0;

        int temp1=p.top();
        p.pop();
        
        int temp2=p.top();
        p.pop();
        sum+=temp1+temp2;

    while(!p.empty())
    {
        sum+=p.top();
        p.pop();
    }

    cout<<sum<<'\n';
    return 0;
}