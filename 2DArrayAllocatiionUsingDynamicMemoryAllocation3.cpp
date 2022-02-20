#include<iostream>
#include<new>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the dimensions of the array\n";
    cin>>m>>n;

    int** arr=new (nothrow) int*[m];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
    }
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
            cout<<arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    delete[]arr[i];
    delete[]arr;
    arr=NULL;
    return 0;
}