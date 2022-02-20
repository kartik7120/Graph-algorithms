#include<iostream>
using namespace std;
// Diamond with stars
/*
     *
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     *
*/
int main()
{
    int n;
    cout<<"Enter the number \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(j>i)
            cout<<" ";
            else
            if(j<=i)
            {
                cout<<"*";
            }
        }
        for(int x=2;x<=i;x++)
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
            if(j<=i)
            {
                cout<<"*";
            }
        }
        for(int x=2;x<=i;x++)
        cout<<"*";
        
        cout<<endl;
    }
    return 0;
}