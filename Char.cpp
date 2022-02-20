#include<iostream>
using namespace std;

int ascii(char ch1)
{
    int z=(int)ch1;
    return z;
}

int main()
{
    char ch;
    cout<<"Enter the value of the character\n";
    cin>>ch;
    int c= ascii(ch);
    cout<<c<<endl;
    return 0;
}