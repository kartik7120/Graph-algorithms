#include<iostream>
using namespace std;
// unary operator output question 2
int main()
{
    int i=1;
    int j=2;
    int k=0;
    //1 //2  //1  //2     //3  //4
    k=i + j + i++ + j++ + ++i + ++j;
    cout<<"Value of i ="<<i<<endl;
    cout<<"Value of j  ="<<j<<endl;
    cout<<"Value of k ="<<k<<endl;
    return 0;
}