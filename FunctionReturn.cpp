#include<iostream>
using namespace std;

int add(int c,int d)
{
    int sum=c+d;
    return sum;
}
int main()
{
    int a=1;int b=3;
    int c=add(a,b);

    cout<<c<<endl;
    return 0;
}
