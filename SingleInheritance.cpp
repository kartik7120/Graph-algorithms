#include<iostream>
using namespace std;
// Single inheritance means that one class A is inherited from one class B
// Private members or attributes are not accessed during inheritance
class A // class A is a parent class
{
    public:
    void func()
    {
        cout<<"Inherited"<<endl;
    }
};

class B : public A // class B is child class 
{

};

int main()
{
    B obj;
    obj.func(); //we are able to access the members of public members of class A from class B
    return 0;
}