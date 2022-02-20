#include<iostream>
using namespace std;
//Palindrome pattern
/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(j>i)
            cout<<" ";
            else
            cout<<j;
        }
        for(int x=2;x<=i;x++)
        cout<<x;
        cout<<endl;
    }
    return 0;
}