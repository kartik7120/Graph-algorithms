#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="kaartik";
    // we can use either length() or size() to find the length of a string
    
    int len=str.length();//will return the totol of the string
    cout<<len<<endl;
    int len2=str.size();//will return the totol of the string
    cout<<len2<<endl;
    return 0;
}