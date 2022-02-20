#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;

    char arr[n+1];
    cout<<"Enter the characters of the array\n";
    cin>>arr; // used to input character if there is no spaces in between the characters

    cout<<arr; // used to output character if there is no spaces in between the characters

    return 0;
}