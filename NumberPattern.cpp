#include<iostream>
using namespace std;
// Number pattern
/*
      1
     1  2
   1  2  3 
  1  2  3  4
 1  2  3  4  5
 */    
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int x=1;x<=i;x++)
       { cout<<x;
       cout<<" ";
       }
       cout<<endl;
    }
    return 0;
}