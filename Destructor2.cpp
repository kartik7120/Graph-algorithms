#include<iostream>
using namespace std;

class Example
{
    string *ptr;
    public:
    Example()
    {
        ptr=new string;
    }
    Example(string str)
    {
        *ptr=str;
    }
    ~Example() //Destructor
    {
        cout<<"Destructor"<<'\n';
        delete ptr;
        ptr=NULL;
    }
};

int main()
{
    Example obj;
    Example obj2("kaartik");

    return 0;
}