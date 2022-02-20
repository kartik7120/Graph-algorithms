#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int sum=0;
    int i=1;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=n);
    cout<<sum<<endl;
    return 0;
}