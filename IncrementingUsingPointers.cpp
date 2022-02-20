#include<iostream>
using namespace std;

void increment(int a)// a here is a local variable and a diffrent variable from 'a' declared in the main function
{
    a++;
}

int main()
{
    int a=1;
    increment(a);
    cout<<a<<endl;// value of a will remain 1 and will not increment since we are passing using "call by value" 
                  // in the actual value of the function is passed rather than the reference (which is done using pointers)
    return 0;
}