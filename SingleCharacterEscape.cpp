#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout<<"Hello World\n";

    cout<<"HEllo world\r"; // \r us used for carriage return 

    cout<<"Hello World\t"<<"Hello"<<endl;;  // \t is used for tab

    cout<<"Hello World\v"<<"Hello"<<endl;// \v is used for vertical tabs

    cout<<"Hello World\a"<<endl;

    string x="String expressed in \
    two lines";
    cout<<x<<endl;

    
    return 0;
}
/*
SingleCharacterEscape
*/