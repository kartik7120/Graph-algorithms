#include<iostream>
using namespace std;

int main()
{
    int n=0;
    cout<<"Enter the value of n\n";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}