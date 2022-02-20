#include<iostream>
using namespace std;

template <class t>
void sum(t a,t b)
{
    cout<<a+b<<endl;
}

int main()
{
    int a=1;int b=2;
    sum<int>(a,b);
    return 0;
}