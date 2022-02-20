#include<iostream>
using namespace std;

inline void add(int a,int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}

int main()
{
    int a=1;int b=2;
    add(a,b);
    return 0;
}