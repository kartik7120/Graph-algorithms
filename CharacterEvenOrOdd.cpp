#include<iostream>
using namespace std;

bool alpha(char ch1)
{
    int z=(int)ch1;
    if(z>=65&&z<=90||z>=97&&z<=122)
    return true;
    else
    return false;
}

int main()
{
    char ch;
    cin>>ch;
    if(alpha(ch))
    cout<<"alphabet\n";
    else
    cout<<"Not an alphabet\n";
    return 0;
}