#include<iostream>

using namespace std;

int FirstOccurence(int arr[],int n,int i,int k)
{
    if(i==n)
    return i-1;
    FirstOccurence(arr,n,i+1,k);

    if(arr[i]==k)
    return i;
    return i;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    int st= FirstOccurence(arr,n,0,k);
    cout<<st<<endl;
    return 0;
}