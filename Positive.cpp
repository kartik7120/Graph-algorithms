#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;int sum=0;
    while(n>=0)
    {
        sum+=n;
        cout<<"Enter the number\n";
        cin>>n;
    }
    cout<<sum<<endl;
    return 0;
}