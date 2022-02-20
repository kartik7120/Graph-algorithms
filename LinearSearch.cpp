#include<iostream>
using namespace std;

int linearSearch(int key,int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        return 1;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int arr[n]={0};
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the number to be found\n";
    cin>>key;
    int result= linearSearch(key,n,arr);
    if(result==1)
    cout<<"Key found\n";
    else
    cout<<"Key not found\n";
    return 0;
}