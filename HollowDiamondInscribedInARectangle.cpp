#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows\n";
    cin>>n;
    int space=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<"*";
        }
        if(i!=1)
        space=1+(i-2)*2;
        for(int x=1;x<=space;x++)
        cout<<" ";
        for(int j=n;j>=i;j--)
        {
            if(j==1)
            break;
            cout<<"*";
        }
        cout<<endl;
        space=0;
        
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<"*";
        }
        if(i!=1)
        space=1+(i-2)*2;
        for(int x=1;x<=space;x++)
        cout<<" ";
        for(int j=n;j>=i;j--)
        {
            if(j==1)
            break;
            cout<<"*";
        }
        cout<<endl;
        space=0;
        
    }
    return 0;
}

