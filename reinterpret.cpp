#include<iostream>
using namespace std;

class A
{public:
    A(){}

};

class B
{public:
    B(){}
};


int main()
{
    A* a=new A;
    B* b=reinterpret_cast<B*>(a);
    
    return 0;
}