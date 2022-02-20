#include<iostream>
#include<limits>
using namespace std;

int main()
{
    int a=1;// binary equivalant is 0001

    //to count number of leading zero's
   cout<<__builtin_clz(a)<<endl;
    
    //to count no of trailing zero's
    cout<<__builtin_ctz(a)<<endl;

    //to count number of ones bits
    cout<<__builtin_popcount(a)<<endl;
    return 0;
}