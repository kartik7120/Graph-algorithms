#include<iostream>
using namespace std;

bool ispower2(int n)
{
    return (n&& !(n&n-1));

}

int main()
{
    int n;
    cin>>n;
    if(ispower2(n))
    cout<<"yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}