#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    while(n>0)
    {
        int lastdigit=n%10;
        cout<<lastdigit<<endl;
        n=n/10;
    }
    return 0;
}