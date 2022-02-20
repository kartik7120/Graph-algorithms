#include<iostream>
using namespace std;
// find a unique number in an array
void unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    cout<<xorsum<<endl;
}

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    unique(arr,n);
    return 0;
}