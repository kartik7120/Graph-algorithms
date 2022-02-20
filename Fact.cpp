#include<iostream>
using namespace std;

void factors(int n)
{
    int i=1;
    while(i<=n)
    {
        if(n%i==0)

        cout<<i<<" ";
        i++;
    }
    return ;
}

int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    factors(n);
    return 0;
}