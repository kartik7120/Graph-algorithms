#include<iostream>
using namespace std;
// find what bit is present at the ith position of the binary equivalant of n

void GetBit(int n,int i)// local variables
{
    if(n&(1<<i)!=0)
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
    return ;
}
int main()
{
    int n;
    cout<<"Enter the number"<<'\n';
    cin>>n;
    cout<<"Enter the postion to check which bit is present there\n";
    int i;
    cin>>i;
    GetBit(n,i);
    return 0;
}