#include<iostream>
using namespace std;


int factorial(int n)
{
    if(n==0)
    return 1;

    
   int fact=factorial(n-1);
    return n*fact;
}

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}