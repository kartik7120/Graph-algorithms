#include<iostream>
#include<string>
using namespace std;

int main()
{
    string mystr;
    cout<<"Enter the number\n";
    getline(cin,mystr);
    cout<<mystr<<endl;
    cout<<"Enter the name of your favourite Anime\n";
    getline(cin,mystr);
    cout<<mystr<<endl;
    return 0;
}