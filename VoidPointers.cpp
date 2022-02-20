#include<iostream>
using namespace std;

void print(void* b)
{
    cout<<b<<endl;
    cout<<*b<<endl;// cannot dereference the pointer because it does have a datatype  (void)
    return ;
}

int main()
{
    int a=0;
    print(&a);
    return 0;
}