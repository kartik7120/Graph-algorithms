#include<iostream>
using namespace std;
// Print numbers in increasing order till n

int PrintTillN(int n)
{
    if(n==0)
    return 1;
    PrintTillN(n-1);
    cout<<n<<endl;
    return n;
}

int main()
{
    int n;
    cin>>n;
    PrintTillN(n);
    return 0;
}