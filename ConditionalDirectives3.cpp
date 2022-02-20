#include<iostream>
using namespace std;
/*
//The #if, #else and #elif (i.e., "else if") directives serve to specify some condition to be met in order for the portion of code they surround to be compiled. 
The condition that follows #if or #elif can only evaluate constant expressions, including macro expressions
*/

#define TABLE_SIZE 300

int main()
{
    #if TABLE_SIZE>200
    #undef TABLE_SIZE
    #define TABLE_SIZE 200

    #elif TABLE_SIZE<50
    #undef TABLE_SIZE 
    #define TABLE_SIZE 50

    #else
    #undef TABLE_SIZE
    #define TABLE_SIZE 100
    #endif

    cout<<TABLE_SIZE<<endl;
    return 0;
}