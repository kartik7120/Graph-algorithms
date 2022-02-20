#include<iostream>
using namespace std;
void binarySearch(int arr[],int n,int key)
{
    int l=0;//starting point
    int u=n;//ending pointint 
    int midpoint=0;
    while(l<=u)
    {
         midpoint=(l+u)/2;
        if(arr[midpoint]==key)
        {
            cout<<"Number found\n";
            break;
        }
        else
        if(arr[midpoint]>key)
        l=midpoint+1;
        else
        if(arr[midpoint]<key)
        u=midpoint-1;

    }
}
int main()
{
    int n;
    cout<<"ENter the length of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[n]; 
    }
    int key=0;
    cout<<"Enter the number to be searched\n";
    cin>>key;
    binarySearch(arr,n,key);
    return 0;
}