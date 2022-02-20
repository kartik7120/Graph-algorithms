#include<iostream>
using namespace std;

void fibo(int n1)
{
    int x=0;int y=1;
    int z=0;
     int i=3;
     while(i<=n1)
     {
         z=x+y;
         cout<<z<<" ";
         x=y;
         y=z;
         i++;
     }
     return ;
}
int main()
{
    int n;
    cin>>n;
    if(n==1)
    cout<<"0 ";
    else
    if(n==2)
    cout<<"0 1 ";
    else
    if(n>2)
    {
        cout<<"0 1 ";
        fibo(n);
    }
    return 0;
}