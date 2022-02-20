#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the character array\n";
    cin>>n;

    char arr[n+1];
    cin.ignore(n,'\n');
    cin.getline(arr,n);
    cin.ignore();
    cout<<arr;
    return 0;
}