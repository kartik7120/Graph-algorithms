#include<iostream>
using namespace std;

class add
{
    int num;
    public:

    add():num(10){}

    void operator++()
    {
        num=num-3;
    }
    
    void print()
    {
        cout<<num<<endl;
    }
};

int main()
{
    add b;
    ++b;
    b.print();
    return 0;
}