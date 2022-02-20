#include<iostream>
using namespace std;
//Fibonacci series -> 0,1,1,2,3,5,8,13,21,.....
int main()
{
    int n;
    cout<<"enter the number\n";
    cin>>n;
    int x=0;
    int y=1;
    int z=0;
    if(n==1)
    cout<<"0 \n";
    else
    if(n==2)
    cout<<"0 1 "<<endl;
    else
    if(n>2)
    {
        
        cout<<"0 1 ";
        for(int i=3;i<=n;i++)
        {
            z=x+y;
            cout<<z<<" ";
            x=y;
            y=z;
        }
    }
    return 0;
}