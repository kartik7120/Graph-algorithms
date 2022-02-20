#include<iostream>
#include<string>
using namespace std;
// if we need to compare two strings to check if they are equal or which one is bigger or smaller
int main()
{
    string a="abc";
    string b="xyz";

    int c=a.compare(b);//it will return an integer value and it compares two lexicographically,we are here comparing a string with b string
    // if the value is +ve then a is biggger that b
    //if the value is -ve then b is bigger that a or a is smaller that b
    //if the value is 0 then a and b are equal
    cout<<c<<endl;
    return 0;
}