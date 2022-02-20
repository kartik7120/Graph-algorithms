#include<iostream>
using namespace std;
//using multiple pointers to point and dereference
int main()
{
    int a=10;

    int *p=&a;

    cout<<p<<endl;//will print address of 'a' in the memory
    cout<<*p<<endl;//' * ' means that we are dereferencing the variable and it will print value of a

    int **q=&p; // if we need a second pointer pointing to another then we will use ** to make a second pointer
     
     cout<<q<<endl;//will print address of p in the memory
     cout<<*q<<endl;//'*' written means we are derefencing only once and will print address of *p in the memory
     cout<<**q<<endl;//' ** ' written means that we are dereferencing two times thus it will print value of 'a'
     //we also modify the value of 'a' using 'q' in the same way we modify the value of 'a' using pointer 'p'
     return 0;
}