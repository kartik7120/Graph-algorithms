#include<iostream>
using namespace std;

int CountMaze(int n,int i,int j)
{
    if(i==n-1)
    return 1;
    if(j==n-1)
    return 1;
    if(i==n)
    return 0;
    if(j==n)
    return 0;

    //int a=CountMaze(n,i+1,j);
    //int b=CountMaze(n,i,j+1);
    return CountMaze(n,i+1,j)+CountMaze(n,i,j+1);
}

int main()
{
    int n;
    cin>>n;
    int ans=CountMaze(n,0,0);
    cout<<ans<<'\n';
    return 0;
}