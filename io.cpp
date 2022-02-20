#include<iostream>
using namespace std;

int fun(int x)
{
    x=30;
    return x;
}

int main()
{
    int x=20;
    fun(x);
    cout<<x<<endl;
    return 0;
}