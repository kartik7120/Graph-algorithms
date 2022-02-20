#include<iostream>
using namespace std;

void sum(int a,int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}

void sum(int a)
{
     a=a*2;
     cout<<a<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;

    sum(a,b);
    sum(a);
    return 0;
}