#include<iostream>
using namespace  std;

void prime(int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        int j;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        cout<<i<<" ";
    }
    return ;
}

int main()
{
    int a;int b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    prime(a,b);
    return 0;
}