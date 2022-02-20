#include<iostream>
using namespace std;

bool isEven(int n1)
{
    if(n1%2==0)
    return true;
    else
    return false;
}

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    if((isEven(n)))
    cout<<"Even\n";
    else
    cout<<"Odd\n";
    return 0;
}