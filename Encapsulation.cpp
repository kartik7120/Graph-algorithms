#include<iostream>
using namespace std;

class example
{
    public:
    void funcA()
    {
        cout<<"func A\n";
    }
    private:
    void funcB()
    {
        cout<<"Func B\n";
    }
    protected:
    void funcC()
    {
        cout<<"Func C\n";
    }
};

int main()
{
    example obj;

    obj.funcA();

    obj.funcB();

    obj.funcC();




    return 0;
}