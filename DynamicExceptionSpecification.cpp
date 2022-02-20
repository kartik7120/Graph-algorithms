#include<iostream>
using namespace std;

double myfunction(char param) throw (int)
{
    param=1;
    return param;
}

int main()
{
    double a=myfunction('a');
    cout<<a<<endl;
    return 0;
}