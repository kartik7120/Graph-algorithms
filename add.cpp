#include<iostream>
using namespace std;

void addition(int a,int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter the numbers\n";
    cin>>a>>b;
    addition(a,b);
    return 0;
}