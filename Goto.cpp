#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    label:
    for(int i=1;i<=n;i++)
    {
        if(i==n)
        goto label;
    }
    return 0;
}