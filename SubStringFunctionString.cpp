#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="kaartik";
    //Find substring of the string
    string result=str.substr(2,3);//syntax -> substr(index position from where the substring will start,no of characters to included 
    //in the substring including the character from where the index starting in the string)

    cout<<result<<endl;
    return 0;
}