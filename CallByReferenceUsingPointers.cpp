#include<iostream>
using namespace std;
// swap the values of elements a and b

void swap(int *a,int *b)//since we are sending address then we need a pointer to recieve it
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=1;
    int b=2;
    int *aptr=&a;
    int *bptr=&b;

    swap(aptr,bptr);//send address of a and b to the swap function
    cout<<a<<" "<<b<<endl;
    return 0;
}