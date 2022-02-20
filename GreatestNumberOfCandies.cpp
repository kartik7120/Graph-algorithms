#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int arr[n]={0};
    cout<<"Enter the elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter extra candy\n";
    int extracandy=0;
    cin>>extracandy;int sum=0;
    int kid=arr[0]+extracandy;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        cout<<"Kid has greatest candies ="<<arr[i];
    }
    return 0;
}