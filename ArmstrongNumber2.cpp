#include<iostream>
using namespace std;

void arm(int n)
{
    int rem=0;int sum=0;
    for(int i=n;i>0;i=i/10)
    {
        rem=i%10;
        sum=sum+(rem*rem*rem);
        
    }
    if(sum==n)
    cout<<"Armstrong number\n";
    else
    cout<<"No\n";
}

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    arm(n);
    return 0;
}