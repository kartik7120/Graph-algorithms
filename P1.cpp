#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=n;j>=1;j--)
        {
            if(j>i)
            cout<<" ";
            else
            if(j<=i)
            cout<<"*";
        }
        for(int x=2;x<=i;x++)
        cout<<" ";
        if(j!=1)
        cout<<"*";
        cout<<endl;
    }
for(int i=n;i>=1;i--)
    {
        int j;
        for(j=n;j>=1;j--)
        {
            if(j>i)
            cout<<" ";
            else
            if(j>=i)
            cout<<"*";
        }
        for(int x=2;x<=i;x++)
        cout<<" ";
        if(i!=1)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}