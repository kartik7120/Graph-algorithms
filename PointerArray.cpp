#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p=new int();
    *p=10;
    cout<<p<<endl;
    cout<<*p<<endl;

    delete(p);

    p=new int[5];// used to allocate a single dimentional array of size 5
    cout<<*p<<endl;
    cout<<p<<endl;
    delete[]p;// used to delete memory block occupied by the array
    p=NULL;//used to delete pointer

    return 0;
}