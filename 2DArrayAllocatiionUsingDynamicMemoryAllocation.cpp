#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int *arr=new int[m*n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>*(arr+i+j);
            cout<<*(arr+i+j);
        }
    }
    return 0;
}

    /*
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<(*arr+i*m+j);
        }
        cout<<endl;
    }
    return 0;

*/