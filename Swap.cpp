#include<iostream>
using namespace std;

int Swap(int a,int b)
{
     int x=a;
     int y=b;
     y=x;
     return y;
}
int main()
{
    int a,b;
    cout<<"Enter the two integers\n";
    cin>>a>>b;
    int h=Swap(a,b);
    int g=Swap(b,a);
    cout<<"a = "<<g<<endl;
    cout<<"b ="<<h<<endl;
    return 0;

}