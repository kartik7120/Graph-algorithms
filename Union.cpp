#include<iostream>
using namespace std;

union my_types
{
    char c;
    int i;
    float f;
}my_types;

int main()
{
    my_types.c='a';
    cout<<my_types.c<<endl;
    my_types.i=1;
    cout<<my_types.i<<endl;
    my_types.f=3.1416;
    cout<<my_types.f<<endl;
    return 0;
}