#include <iostream>
#include<sstream>
using namespace std;

struct movie_t
{
    string name;
    int year;
};

int main()
{
    movie_t title;
    movie_t *pointer=&title;

    string str;

    cout<<"Enter the title \n";
    cin>>pointer->name;
    cin.ignore();
    cout<<"Enter the year\n";
    getline(cin,str);
    stringstream (str) >> title.year;
    
    cout<<pointer->name<<endl;
    cout<<title.year<<endl;

    return 0;
}