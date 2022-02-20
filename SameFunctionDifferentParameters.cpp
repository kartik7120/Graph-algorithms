#include<iostream>
using namespace std;

void add(int a,int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}

void add(int a,int b,int c)
{
    int sum=a+b+c;
    cout<<sum<<endl;
}

int main()
{
    int a=0,b=1;
    add(a,b);
    add(a,b,2);
    return EXIT_SUCCESS;//Same as writing return 0
}