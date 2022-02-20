#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENter the number\n";
    cin>>n;int fact=1;
    do
    {
        fact=fact*n;
        n--;
    }while(n>0);
    cout<<fact<<endl;
    return 0;
}