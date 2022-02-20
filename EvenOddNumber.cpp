#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    if(n%2==0)// % is a operator which is used to return remainder
    cout<<"Number is even\n";
    else
    cout<<"Number is odd\n";
    return 0;
}