#include<iostream>
using namespace std;

void smallestprimefactor(int n)
{
    int spf[100]={0};

    for(int i=2;i<=n;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i;i*i<=j;j+=i)
            {
                if(spf[j]==j)
                spf[j]=i;
            }
        }
        while(n!=1)
        cout<<
    }
    

}

int main()
{
    int n;
    cin>>n;
    smallestprimefactor(n);
    return 0;
}