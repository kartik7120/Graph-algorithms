#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int arr[n]={0};int temp=0;
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    for(int h=0;h<n;h++)
    {
        cout<<arr[h]<<endl;
    }
}