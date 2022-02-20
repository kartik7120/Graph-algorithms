#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int temp=0;

    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
        i++;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}