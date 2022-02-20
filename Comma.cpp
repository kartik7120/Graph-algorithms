#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a=(1,2,3);// Associativity of comma operator is form left to right
    cout<<a<<endl;
    return 0;
}