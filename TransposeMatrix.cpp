#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int arr[m][n];int arr2[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr2[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}