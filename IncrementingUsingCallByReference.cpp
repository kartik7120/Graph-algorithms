#include<iostream>
using namespace std;

void increment(int *a)// *a (pointer a) is required to store the address
{    
    ((*a)++);//first the element is deferenced and then it is incremented
}

int main()
{
    int a=1;

    increment(&a);//sending the address of the a
    cout<<a<<endl;// value of a will remain 1 and will not increment since we are passing using "call by value" 
                  // in the actual value of the function is passed rather than the reference (which is done using pointers)
    return 0;
}