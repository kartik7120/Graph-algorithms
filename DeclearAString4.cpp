#include<iostream>
#include<string>
using namespace std;
// if we want to input a whole sentence with spaces then we will use getline function as cin gets terminated after it encounters a newline('\n') or space
int main()
{
    string str;
    getline(cin,str);
    cout<<str;
    return 0;

}