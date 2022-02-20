#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int* p1=&a;//p1 is a pointer
    int b=*p1;// * dereferences the value stored at the address that has been assigned to p1;
    cout<<p1<<'\n';
    cout<<b<<endl;
    return 0;

}