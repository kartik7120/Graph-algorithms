#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of array\n";
    cin>>n;
    int arr[n]={0};
    short sum=0;
    cout<<"Enter the elements of an array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    return 0;
}