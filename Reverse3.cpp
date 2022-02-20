#include<iostream>
using namespace std;

void reverse(int q)
{
    int sum=0;int rem=0;
    while(q>0)
    {
        rem=q%10;
        sum=sum*10+rem;
        q/=10;
    }
    cout<<sum<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    reverse(n);
    return 0;
}