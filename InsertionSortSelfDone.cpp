#include<iostream>
using namespace std;
// https://www.geeksforgeeks.org/insertion-sort/ (use this to see the explaination and algorithm)
void InsertionSort(int arr[],int n)
{
    int arr1=0;// used for temporary value of the array
    int i=1;
    while(i<n)
    {
        for(int j=i;j>=0;j--)
        {
            if(arr[j]<arr[j-1]&&j>0)
            {
                arr1=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=arr1;
            }
        }
        i++;

    }
    for(int h=0;h<n;h++)// used to print the elements of the array
    cout<<arr[h]<<" ";
    return ;
}

int main()
{
     int n;
     cout<<"Enter the length of the array\n";
     cin>>n;
     int arr[n]={0};
     cout<<"ENter the elements of the array\n";
     for(int i=0;i<n;i++)
     cin>>arr[i];
     InsertionSort(arr,n);
     return 0;
}