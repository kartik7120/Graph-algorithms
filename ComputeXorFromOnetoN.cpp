#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int xornum=0;
    for(int i=1;i<=n;i++)
    {
        xornum=xornum^i;
    }
    cout<<xornum<<endl;
    return 0;
}