#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n)
{
    int temp=0;
    int i=1;
    while(i<n)
    {
        for(int j=i;j>=0;j--)
        {
            if(arr[j]<arr[j-1]&&j>0)
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;

            }
        }
        i++;

    }
    for(int h=0;h<n;h++)
    cout<<arr[h]<<" ";
}

int main()
{
    int n;
    cout<<"Enter the length of thr arrat\n";
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    cin>>arr[i];
    InsertionSort(arr,n);
    return 0;
}