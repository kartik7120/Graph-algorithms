#include<iostream>
#include<string>
using namespace std;
// Reverse a string using recurtion
int reverse(string str,int n)
{
    if(n==str.size())
    return n;
    int index=reverse(str,n+1);
    cout<<(str.at(n))<<" ";
    return n-1;

}

int main()
{
    string str;
    getline(cin,str);

    reverse(str,0);
    return 0;
}