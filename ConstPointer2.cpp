#include<iostream>
using namespace std;

int main()
{
    int a=10;

    int *p1=&a;// non const pointer to non const integer
    const int *p2=&a;//the value of the pointer is constant but the address that it is being assigned to is not constant
    int * const p2=&a;//the value that the pointer is pointing to can be modified but the address value of the pointer is not modifiable
    const int* const p2=&a// the value that the pointer is pointing as well the address that the pointer has been assigned to
    cout<<p1<<endl;
    cout<<*p1<<endl;

    cout<<++p1<<endl;
    cout<<++(*p1)<<endl;

}