#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int *arr = new int[m * n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>*(arr+i*n+j);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<*(arr+i*n+j)<<" ";
        }
        cout<<endl;
    }    
    
    return 0;
}