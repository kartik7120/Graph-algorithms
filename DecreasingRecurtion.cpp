#include<iostream>
using namespace std;

int decreasing(int n)
{
    if(n==0)
    return 1;
    cout<<n<<endl;
    decreasing(n-1);
    return n;
}

int main()
{
    int n;
    cin>>n;

    decreasing(n);
    return 0;
}