#include<iostream>
using namespace std;

void linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        cout<<"Number found!\n";
    }
    
}

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int arr[n]={0};
    cout<<"Emgth the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched\n";
    int key=0;cin>>key;
    linearsearch(arr,n,key);
    return 0;
}