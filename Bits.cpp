#include<iostream>
using namespace std;

int main()
{
    int a=1;// binary representations of 1 -> 00000001
    int c=~a; // after fliping the bits it will become 11111110 which is binary representation of -2 if using signed variable
    // and 4294967294 if using unsigned variable
    cout<<c;
    return EXIT_SUCCESS;
}