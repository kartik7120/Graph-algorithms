#include<iostream>
using namespace std;

int sum(int n1)
{
    int ans=0;
    for(int i=1;i<=n1;i++)
    ans=ans+i;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}