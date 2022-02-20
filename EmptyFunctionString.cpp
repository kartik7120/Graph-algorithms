#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="abc";

    str.clear();//will clear every character in the string

    bool check=str.empty();// empty function checks if the string is empty or not
    if(check==true)
    cout<<"String is empty"<<endl;
    else
    cout<<"String is full"<<endl;
    return 0;
}