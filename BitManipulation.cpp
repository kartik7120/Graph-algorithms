#include<iostream>
using namespace std;

void UpdateBit(int n,int i,int update)//n is number, i is position where the bit is to be updated and update is bit that will be set at ith position
{
    int clearBit= ~(1<<i);//the position (ith) bit is cleared
    int set=(n|(update<<i));
    cout<<set<<endl;
    return ;

}
// clear a bit at a particular position(i) on the binary equivalant of that number(n)
void ClearBit(int n,int i)
{
    cout<<(n&(~(1<<i)))<<endl;
    return;
}

// set a bit at a particular position on the binary equivalant of that number
void SetBit(int n,int i)
{
    cout<<(n|(1<<1))<<endl;
    return ;
}

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
    SetBit(n,i);
    ClearBit(n,i);
    cout<<"Enter the bit to be update\n";
    int update;
    cin>>update;
    UpdateBit(n,i,update);
    return 0;
}