#include<iostream>
using namespace std;

int CountMaze(int n,int i,int j)
{
    if(i==(n-1)&&j==(n-1))
    return 1;
    if(i==n&&j==n)
    return 0;
    return CountMaze(n,i+1,j)+ CountMaze(n,i,j+1);
}

int main()
{
    int n;
    cout<<"Enter the size of the maze"<<'\n';
    cin>>n;
    //starting point of the maze is 0,0
    int ans= CountMaze(n,0,0);
    cout<<ans<<'\n';
    return EXIT_SUCCESS;
}