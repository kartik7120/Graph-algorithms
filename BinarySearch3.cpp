#include<iostream>
using namespace std;

void binarysearch(int arr[],int n,int key)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    int l=0;
    int u=n-1;
    while(l<=u)
    {
        int k=(l+u)/2;
        if(arr[k]==key)
        {
            cout<<"Number Found\n";
            break;
        }
        else
        if(arr[k]>key)
        u=k-1;
        else
        if(arr[k]<key)
        l=k+1;
        l++;
    }
    
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
int key;
cout<<"Enter the number to be searched\n";
cin>>key;
    binarysearch(arr,n,key);
    return 0;
}