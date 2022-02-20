#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch[n];
    /*cin.ignore();
    char ch[n+1];
    cin.getline(ch,n);*/
    for(int i=0;i<n;i++)
    cin>>ch[i];
    for(int i=0;i<n;i++)
    cout<<ch[i];
    return 0;
}