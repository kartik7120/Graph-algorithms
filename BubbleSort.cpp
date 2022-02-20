#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    int arr1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr1=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr1;

            }
        }
    }
    for(int h=0;h<n;h++)
    cout<<arr[h]<<endl;
}

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int arr[n]={0};
    cout<<"Enter the elements if the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    bubblesort(arr,n);
    return 0;
}