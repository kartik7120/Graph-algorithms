#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore(n,'\n');
    char arr[n+1];
    cin.getline(arr,n+1);
    cout<<arr;
    return 0;
}