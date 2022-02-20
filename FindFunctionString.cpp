#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="nincompoop";

    //if we need to find a certain character in a string then we will use the find function,it returns the index at which the character
    //is present
    int a=str.find("n");// if a charecter is present twice in a string then it will consider the index of that character which came first
    cout<<a<<endl;
    int b=str.find("com");//it will return the index from where the "com" is starting in the string str i.e. from 3rd index
    cout<<b<<endl;
    return 0;
}