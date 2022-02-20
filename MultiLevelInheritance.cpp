#include<iostream>
using namespace std;
// In multi level inheritance we are inheriting class A in class B and then inheriting class B in class C thus automatically we are
// in heriting members of class A in class C as we are inheriting class B in class A
class A
{
    public :
    void funcA()
    {
        cout<<"Func A\n";
    }

};

class B :public A
{
    public :
    void funcB()
    {
        cout<<"Func B\n";
    }
};

class C : public B
{

};



int main()
{
    C obj;
    obj.funcA();
    obj.funcB();

    return 0;
}