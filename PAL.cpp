#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(j>i)
            cout<<" ";
            else
            if(j<=i)
            cout<<j;
        }
        for(int x=2;x<=i;x++)
        cout<<x;
        cout<<endl;
    }
    return 0;
}