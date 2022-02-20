#include<iostream>
using namespace std;

class base
{
    virtual void dummy(){}
};

class Derived : public base{
    int a;
};

int main()
{
    try
    {
        base* pba=new Derived;
        base* pbb=new base;
        Derived* pd;

        pd=dynamic_cast<Derived*>(pba);
        if(pd==0)
        {
            cout<<"NULL pointer on first type cast\n";
        }
        pd=dynamic_cast<Derived*>(pbb);
        if(pd==0)
        {
            cout<<"NULL pointer on second type cast\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}