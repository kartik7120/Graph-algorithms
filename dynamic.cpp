#include<iostream>
using namespace  std;

int main()
{
    int m,n;
    cin>>m>>n;
    int *p=new int[m][n];
    cout<<p<<endl;
    cout<<*p<<endl;
    delete[][]p;
    p=NULL;
    return 0;
}