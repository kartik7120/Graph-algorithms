#include<iostream>
using namespace std;

void fac(int n1)
{
    int fact=1;
    while(n1>0)
    {
        fact=fact*n1;
        n1--;
    }
    cout<<fact;
    return; 
}

int main()
{
    int n;
    cin>>n;
    fac(n);
    return 0;
}