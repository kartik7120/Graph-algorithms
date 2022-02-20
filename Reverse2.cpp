#include<iostream>
using namespace std;

int main()
{
    int n;
     int reverse=0;;
    cout<<"Enter the number\n";
    cin>>n;int c=0;int lastdigit=0;
    for(int i=n;i>0;i=i/10)
    {
        lastdigit=i%10;
        reverse=reverse*10+lastdigit;
    }
    cout<<reverse;
    return 0;
}