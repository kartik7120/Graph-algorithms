#include<iostream>
using namespace std;

int increasing(int n)
{
    if(n==0)
    return 1;

    increasing(n-1);// we are first calling the function to the end so that value of n becomes zero and then we are printing it
    cout<<n<<endl;
    return n;
}

int main()
{
    int n;
    cin>>n;
    increasing(n);
    return 0;
}