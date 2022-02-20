#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cin>>n;

    double b=log(n);// if n = 0 then a domain error occurs
    cout<<b<<endl;
    return 0;

}