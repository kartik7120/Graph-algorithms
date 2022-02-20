#include<iostream>
using namespace std;
// we can perform some basic arithematic operations on pointers like ++,--,+,-.That's it!
int main()
{
    //decrement operator
    int a=10;
    int*aptr=&a;

    cout<<aptr<<endl;// will print address of variable 'a' in the memory
    aptr++;
    cout<<aptr<<endl;// will increment the value of the address of the variable in the memory since we know that 'int'
                    // datatype stores 4 bytes in the memory

   char c='b';
   char*aptr1=&c;

   cout<<aptr1<<endl; // will print the address of the variable 'a' in the memory
    aptr1++;         // will increment the value of the address of the variable in the memory since we know that 'char'
    cout<<aptr1<<endl;// datatype stores 1 bytes in the memory

    // decrement operator

    int d=10;
    int*aptr2=&d;

    cout<<aptr2<<endl;// will peint address of variable 'a' in the memory
    aptr2--;
    cout<<aptr2<<endl;// will decrement the value of the address of the variable in the memory since we know that 'int'
                    // datatype stores 4 bytes in the memory

    cout<<*aptr<<endl;

   char e='b';
   char*aptr3=&e;

   cout<<aptr3<<endl; // will print the address of the variable 'a' in the memory
    aptr3++;         // will decrement the value of the address of the variable in the memory since we know that 'char'
    cout<<aptr3<<endl;// datatype stores 1 bytes in the memory

    int f=10;
    int*aptr4=&f;

    cout<<aptr4<<endl;// will peint address of variable 'a' in the memory
    aptr4++;
    cout<<aptr4<<endl;// will increment the value of the address of the variable in the memory since we know that 'int'
                    // datatype stores 4 bytes in the memory
    // addition
   int g='b';
   int*aptr5=&g;

   cout<<aptr5<<endl; // will print the address of the variable 'a' in the memory
   aptr5=aptr5+1;     // will increment the value of the address of the variable in the memory since we know that 'char'
   cout<<aptr5<<endl;// datatype stores 1 bytes in the memory

   return 0;
}