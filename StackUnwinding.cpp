#include<iostream>
using namespace std;
// For more info on stack unwinding :- 
// https://www.geeksforgeeks.org/stack-unwinding-in-c/

void f1()throw(int)
{
    cout<<"\n f1() Start";
    throw 100;
    cout<<"\n f1() end";
}

void f2() throw(int)
{
    cout<<"\n f2() start";
    f1();
    cout<<"\n f2 end";
}
void f3()
{
    cout<<"\n f3() start";
    try
    {
        f2();
    }
    catch(int i)
    {
        cout<<"\n Caught Exception: "<<i;
    }
    cout<<"\n f3() end";
}
int main()
{
    f3();

    return 0;
}