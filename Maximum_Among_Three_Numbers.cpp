#include<iostream>
using namespace std;

int main()
{
    int a;int b;int c;
    cout<<"Enter the value of a,b and c\n";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<"a is  greatest\n";
        else
        cout<<"c is greatest\n";

    }
    else
    if(b>c)
    cout<<"b is greatest\n";
    else
    cout<<"c is greatest\n";
}