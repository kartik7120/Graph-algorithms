#include<iostream>
using namespace std;

void count1s(int n)
{
    int count=0;
    while(n>0)//we can also simply write n
    {
        n=n&(n-1);
        count++;
    }
    cout<<count<<endl;
}

int main()
{
    int n;
    cin>>n;

    count1s(n);
    return 0;
}