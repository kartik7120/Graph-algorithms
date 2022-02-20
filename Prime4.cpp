#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"non prime\n";
        break;
        }
        i++;

    }
    if(i==n)
    cout<<"prime\n";
    return 0;
}