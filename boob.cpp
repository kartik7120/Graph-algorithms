#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return ;
}


void Selection(int arr[],int n)
{
    int i=1;
    while(i<n)
    {
        for(int j=i;j>=0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j-1]=temp;
            }
        }
        i++;
    }
    print(arr,n);
    return ;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Selection(arr,n);
    return 0;
}