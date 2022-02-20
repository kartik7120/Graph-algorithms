#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n)
{
    arr[n]={0};
    int arr1=0;//used for swaping (used for storing temporary variable)
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                arr1=arr[j];
                arr[j]=arr[i];
                arr[i]=arr1;
            }
        }
    }
    for(int h=0;h<n;h++)
    cout<<arr[h]<<" ";
    return;
}

int main()
{
    int n;
    cout<<"Enyer the length of the array\n";
    cin>>n;
    int arr[n]={0};
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    SelectionSort(arr,n);
    return 0;
}