#include<iostream>
using namespace std;

int DeciToBin(int n1)
{
    int sum=0;int c=0;string s="";
    while(n1>0)
    {
        int rem=n1%2;
               
    n1/=2;
    }
    int x=(int)s;
    return x;
}

int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    int a=DeciToBin(n);
    cout<<a<<endl;
    return 0;
}