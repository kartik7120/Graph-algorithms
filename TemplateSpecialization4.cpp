#include<iostream>
using namespace std;
//For special Tempplate initialization we need to first define a normal template
template <class T> // Normal Template
class myclass
{
    T a;
    public:
    myclass(T x)
    {
        a=x;
    }
};

template <> // Template Specialition
class myclass <int>
{
    int a,b;
    public:
    myclass(int x,int y)
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<a<<" "<<b<<'\n';
    }
};

int main()
{
    myclass <int> obj(2,3);
    obj.print();
    return 0;
}