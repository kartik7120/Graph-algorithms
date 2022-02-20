#include<iostream>
using namespace std;

bool prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    int spf=0;
    int minprime=0;
    int i=2;
    while(n!=1)
    {
        bool ans=prime(i);
        if(ans)
        {
            
            if(n%i==0)
            {
            minprime=min(minprime,i);
            n=n/i;
            i++;
            }
        else
        i++;
    }
    }
    cout<<minprime<<endl;
    return 0;
}