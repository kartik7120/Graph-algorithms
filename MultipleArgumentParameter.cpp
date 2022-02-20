#include<iostream>
using namespace std;

void myFunction(int a1,int b1)
{
    cout<<a1<<endl<<b1<<endl;
    return ;
}
int main()
{
    int a=1;int b=2;
    myFunction(a,b);
    return 0;
}
/*
Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters
and the arguments must be passed in the same order.
*/
