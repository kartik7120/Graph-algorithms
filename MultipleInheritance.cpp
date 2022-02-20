#include<iostream>
using namespace std;

// Multiple inheritance means that two or more classes are inherited by a single class

class A
{
    public :
    void funcA()
    {
        cout<<"Func A"<<endl;
    }
};

class B
{
    public :
    void funcB()
    {
        cout<<"Func B"<<endl;
    }
};

class C : public A , public B // All public attributes of class A and class B are inherited in the class C
{

};

int main()
{
    C obj;// making object of class C
    obj.funcA();
    obj.funcB();
    return 0;
}

