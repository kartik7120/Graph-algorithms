#include<iostream>
using namespace std;

int main()
{
    short a;short b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    char op;
    cout<<"Enter a operator :"<<endl;
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"Wrong input\n";
        break;
    }
        return 0;
}



