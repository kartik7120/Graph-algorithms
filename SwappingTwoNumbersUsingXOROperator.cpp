#include<iostream>
using namespace std;
// Question can come as swap two using bitwise operators and swap two numbers using a single expression
int main()
{
    int a=5;
    int b=7;

    // Step 1 :-

    a=a ^ b; // (value of a) 0101 ^ (value of b) 0111 = 0010 (which is equivalant to 2 in decimal number system)

    //Step 2 :-

    b=b ^ a; // (value of b) 0111 ^ (current value of a) 0010 = 0101 (which is equivalant to 5 in deciamal number system)

    //Step 3 :-

    a=a ^ b;// (value of a) 0010 ^ (current value of b) 0101 = 0111 (which is equivalant to 7 in deciamal number system)

    cout<<a<<endl<<b<<endl;
    return 0; 
}

/* Bitwise operators are very fast as our computer can work directly on bits instead of converting decimal numbers to binary numbers 
and then performing the operations . This can help in competative programming .
