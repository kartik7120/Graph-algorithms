#include<iostream>
using namespace std;


int PrintTillOne(int n,int i)
{
    if(i==n)
    return i;

    PrintTillOne(n,++i);
    cout<<i<<endl;
    return i;
}

int main()
{
    int n;
    cin>>n;

    PrintTillOne(n,0);
    return 0;
}