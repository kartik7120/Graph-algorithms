#include<iostream>
using namespace std;

void factorial(int n)
{
    int fact=1;
    while(n>=1)
    {
        fact=fact*n;
        n--;
    }
    cout<<fact;
}

int main()
{
    int n;
    cout<<"Emter the number\n";
    cin>>n;
    factorial(n);
    return 0;
}