#include<iostream>
using namespace std;

int main()
{
    int a=10;

    int*aptr; //&a is used to give the address of the variable 'a' in the memory
    aptr=&a;  // *aptr is a pointer of integer type

    cout<<&a<<endl; //&a is used to give the address of the variable 'a' in the memory
    cout<<aptr<<endl;
    cout<<*aptr<<endl;//used to excess the access the variable 'a' in the memory
    // we can also modify the value of 'a' using *aptr

    *aptr=20;
    cout<<a<<endl;//will print 20 since we changed the value of 'a' using the pointer *aptr
    return 0;
    
}