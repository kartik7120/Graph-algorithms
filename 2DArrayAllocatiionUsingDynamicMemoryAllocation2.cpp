#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of rows and columns of an array\n";
    cin>>m>>n;

    int *p=new int[m*n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>*(p+i*n+j);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<*(p+i*n+j);
        }
        cout<<endl;
    }
    return 0;
}