#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Entre the dimensions of the array"<<'\n';
    cin>>m>>n;
    int arr[m*n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i*n+j];
        }
        
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i*n+j];
        }
        cout<<'\n';
    }
    return 0;
}