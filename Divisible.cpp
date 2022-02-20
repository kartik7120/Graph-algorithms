#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    if(n%2==0&&n%3==0)
    cout<<"Divisible by both numbers\n";
    else
    if(n%2==0)
    cout<<"Divisible by either 2\n";
    else
    if(n%3==0)
    cout<<"Divisible ny both numbers\n";
    return 0;
}