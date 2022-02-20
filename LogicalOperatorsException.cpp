#include<iostream>
using namespace std;

int main()
{
    if((5==5)&&(3>6)) // evaluates to false ( true && false )
    cout<<"1"<<endl;

    if((5==5)&&(3>6))
    cout<<"1"<<endl;
    return 0;
}
/*
When using the logical operators, C++ only evaluates what is necessary from left to right to come up with the combined relational result, ignoring the rest. 
Therefore, in the last example ((5==5)||(3>6)), C++ evaluates first whether 5==5 is true, and if so, it never checks whether 3>6 is true or not. 
This is known as short-circuit evaluation, and works like this for these operators:

&& 	if the left-hand side expression is false, the combined result is false (the right-hand side expression is never evaluated).
||  if the left-hand side expression is true, the combined result is true (the right-hand side expression is never evaluated).

*/