#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n]={0};
    int size_of_array=sizeof(arr)/sizeof(arr[0]);
    cout<<size_of_array<<endl;
    return 0;
}