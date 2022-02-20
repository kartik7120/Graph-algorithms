#include<iostream>
using namespace std;

int main()
{
    int y=10;
    int x;
    const int* p=&y;
    x=*p//access value pointed by the pointer p
    *p=x;//not possible as we are modifiying the pointer which is const specified
    cout<<x<<endl;
    cout<<*p<<endl;
    return 0;
}