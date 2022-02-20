#include<iostream>
using namespace std;

int main()
{
    int a=0;int b=0;int c=0;
    cout<<"Enter the values of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b and c\n";
    cin>>b>>c;
    if(a>b)
    {
        if(a>c)
            cout<<"a is greatest\n";
            else
            cout<<"c is greatest\n";
    }
    else
    if(b>c)
        cout<<"b is greatest\n";
        else
        cout<<"c is greatest\n";
        return 0;
}