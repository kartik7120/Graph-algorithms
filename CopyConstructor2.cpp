#include<iostream>
using namespace std;

class Example
{
    string str;
    int b;
    double c;
    public:
    Example()
    {}
    Example(string a,int d,double f)
    {
        str=a;
        b=d;
        c=f;
    }
    Example(const Example &a)
    {
        str=a.str;
        b=a.b;
        c=a.c;
    }
    
};

int main()
{
    Example obj;
    Example obj2(obj);

    return 0;
}