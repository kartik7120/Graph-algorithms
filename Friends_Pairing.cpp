#include<iostream>
using namespace std;

int Friends(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    
    int totalways=Friends(n-1)+Friends(n-2)*(n-1);
    return totalways;
}

int main()
{
    int n;
    cout<<"Entre the number of friends\n";
    cin>>n;
    int ans=Friends(n);
    cout<<ans<<endl;
    return 0;
}