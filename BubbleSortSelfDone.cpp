#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n)
{
     arr[n]={0};
    int arr1=0;//used for temporarily storing variables
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr1=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr1;
            }
        }
    }
    for(int h=0;h<n;h++)//Used for printing the elements of the sorted array
    cout<<arr[h]<<" ";
}

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int arr[n]={0};
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    BubbleSort(arr,n);
    return 0;
}