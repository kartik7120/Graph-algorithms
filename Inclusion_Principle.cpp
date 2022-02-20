#include<iostream>
using namespace std;

// Find all the numbers between 1 and 1000 which are divisible by 5 or 7

void Divisible(int n,int a,int b)
{
    int n1=n/a; // all numbers divisible by a
    int n2=n/b; // all numbers divisible by b
    int n3=n/(a*b); // all numbers divisible by both a and b;

    int result = n1+n2-n3;
    cout<<result<<endl;
    return ;
}

int main()
{
    int n,a,b;
    cout<<"Enter the range\n";
    cin>>n>>a>>b;
    Divisible(n,a,b);
    return 0;
}