#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    cout<<"Enter a number";
    int n;
    cin>>n;int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Non prime\n";
            break;
        }
    }
    if(n==i)
    cout<<"Prime\n";
    return 0;
}