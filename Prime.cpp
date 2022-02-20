#include<iostream>
using namespace std;

int main()
{
    int n=0;
    cout<<"Enter the value of n\n";
    cin>>n;int rem=0;
    int i=2;int c=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==0)
        cout<<i<<" ";
        c=0;
    }
    return 0;
}