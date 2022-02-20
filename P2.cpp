#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            if(j>i)
            cout<<" ";
            else
            if(j==i)
            cout<<"*";
        }
        int space=1+(i-2)*2;
        for(int x=1;x<=space;x++)
        cout<<" ";
        if(i!=1)
        cout<<"*";
        cout<<endl;
        
    }

    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=i;j--)
        {
            if(j>i)
            cout<<" ";
            else
            if(j==i)
            cout<<"*";
        }
        int space=1+(i-2)*2;
        for(int x=1;x<=space;x++)
        cout<<" ";
        if(i!=1)
        cout<<"*";
        cout<<endl;
        
    }
    return 0;
}
