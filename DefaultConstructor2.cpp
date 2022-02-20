#include<iostream>
using namespace std;

class Example
{
    int total;
    public:
    Example()
    {}
    Example (int t)
    {
        total=t;
    }
    void accumulate(int x)
    {
        total+=x;
    }
};

int main()
{
    Example obj(100);
    Example obj2;
    return 0;
}