#include<iostream>
using namespace std;

int main()
{
    const char* foo="hello";//in string null operator is automatically appended
    for(int i=0;i<5;i++)
    cout<<*(foo+i)<<endl;

    for(int i=0;i<5;i++)
    cout<<foo[i]<<endl;
    return 0;
}