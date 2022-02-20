#include<iostream>
#include<sstream>
using namespace std;

struct anime
{
    string title;
    int name;
};

int main()
{
    string str;
    anime movie;
    anime *ptr;
    ptr=&movie;

    cout<<"Enter the name of the anime\n";
    getline(cin,ptr->title);
    cout<<"Enter the year\n";
    getline(cin,str);
    stringstream(str)>>ptr->name;

    cout<<ptr->name<<'\n';
    cout<<(ptr->title)<<'\n';
    return 0;

}
