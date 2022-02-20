#include<iostream>
using namespace std;

int linearSearch(int key,int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        return i;
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
    cout<<"Index ="<<linearSearch(key,n,arr)<<endl;
    return 0;
}