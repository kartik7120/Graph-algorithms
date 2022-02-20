#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    cout<<"";
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(j>i)
            cout<<" ";
            else
            if(i==j)
            cout<<"*";
        }
        int space=1+(i-2)*2;
        if(i!=1)
        {
        for(int x=1;x<=space;x++)
        cout<<" ";
    }
    if(i!=1)
        cout<<"*";
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {
            
            if(j>i)
            cout<<" ";
            else
            if(i==j)
            cout<<"*";
        }
        int space=1+(i-2)*2;
        if(i!=1)
        {
        for(int x=1;x<=space;x++)
        cout<<" ";
        }
        if(i!=1)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}