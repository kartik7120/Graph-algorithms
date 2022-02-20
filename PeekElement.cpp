#include<iostream>
using namespace std;

int FindPeakElement(int arr[],int low,int high,int n)
{
    int mid=low+(high-low)/2;

    if((mid == 0 || arr[mid-1]<=arr[mid]) && (mid == n-1 || arr[mid] >= arr[mid-1]))
    {
        return arr[mid];
    }
    else
    if(mid > 0 && arr[mid-1] > arr[mid])
    {
        return FindPeakElement(arr,low,mid-1,n);
    }
    else
    {
        return FindPeakElement(arr,mid+1,high,n);
    }
}

int main()
{
    int arr[]={0,6,8,5,9};
    cout<<FindPeakElement(arr,0,4,5)<<'\n';
    return 0;
}