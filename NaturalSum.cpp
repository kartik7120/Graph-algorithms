#include<iostream>
using namespace std;

int main()
{
    int n=0;;
    cout<<"Enter the value of n\n";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
     }   
    cout<<sum<<endl;
    return 0;
}