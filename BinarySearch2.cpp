#include<iostream>
using namespace std;

void binarysearch(int arr[],int n,int key)
{
    int l=0;
    int u=n-1;
    while(l<=u)
    {
        int k=(l+u)/2;
        if(arr[k]==key)
        {
        cout<<"Number found\n";
        break;
        }
        else
        if(arr[k]>key)
        u=k-1;
        else
        if(arr[k]<key)
        
            l=k+1;
    
    }
}

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cin>>key;
    cout<<"Enter the element to be searched\n";
    binarysearch(arr,n,key);
    return 0;  
}