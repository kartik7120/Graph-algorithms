#include<iostream>
using namespace std;

//Call by value meathod (Function calling)

int add(int a,int b)//a and b are Formal parameters
{
    int sum=a+b;
    return sum;
}

int main()
{
    int a;int b;
    cin>>a>>b;
    int c=add(a,b);// x and y here are actual parameters 
    cout<<c<<endl;
    return 0;//The value returned by the add function is stored in the variable c
}
/*
Changes made in the formal arguments are not reflected in the actual arguments.
We can use debugger to check the path taken by the program.
*/