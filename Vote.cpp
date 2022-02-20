#include<iostream>
using namespace std;

bool legal(int a)
{
    if(a>=18)
    return true;
    else
    return false;
}

int main()
{
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    if(legal(age))
    cout<<"Eligible for voting\n";
    else
    cout<<"Not elligible for voting\n";
    return 0;
}