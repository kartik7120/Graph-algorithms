#include <iostream>
using namespace std;

class Add
{
    int x;
    int y;

public:
    Add()
    {
        x = 0;
        y = 0;
    }
    Add(int a, int b)
    {
        x = a;
        y = b;
    }
    int operator+()
    {
        x=x+y;
        return x;
    }
};

int main()
{
    Add obj(3,3);

    int a=+obj;
    cout<<a<<endl;

    return 0;
}