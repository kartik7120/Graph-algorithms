#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    string mystr;int n;string name;
    cout<<"Enter your username\n";
    getline(cin,mystr);
    stringstream(mystr)>>name;
    cout<<name<<endl;
    cout<<"Enter your password\n";
    getline(cin,mystr);
    stringstream(mystr)>>n;
    cout<<n<<endl;
    return 0;
}