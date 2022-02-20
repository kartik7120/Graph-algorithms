#include<iostream>
using namespace std;

int fact(int n1)
{
    int fact=1;
    while(n1>0)
    {
        fact=fact*n1;
        n1--;
    }
    return fact;
}

int main()
{
    int n;
    int r;
    cout<<"Enter the value of n\n";
    cin>>n;
    cout<<"Enter the value of r\n";
    cin>>r;
    if(n>r)
    {int binary=fact(n)/(fact(r)*fact(n-r));
    
    cout<<binary;
    }
    else
    cout<<"Wrong input\n";
    return 0;
}