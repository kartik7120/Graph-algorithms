#include<iostream>
using namespace std;

class Base{};

class Derived : public Base{};

int main()
{
    Base* a=new Base;
    Derived* b =static_cast<Derived*>(a);
    return 0;
}