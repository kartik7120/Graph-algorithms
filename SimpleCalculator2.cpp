#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the two numbers\n";
    cin>>a>>b;
    cout<<"Enter the operation to be performed\n";
    char ch;
    cin>>ch;
    switch(ch)
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
        cout<<(a/b)<<endl;
        break;
    }
    return 0;
}