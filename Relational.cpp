#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    if(n>10)
    cout<<"Number is more than 10\n";
    else
    if(n==10)
    cout<<"Number is equal to 10\n";
    else
    cout<<"Number is less than 10\n";
    return 0;
}