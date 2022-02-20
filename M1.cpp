#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;//Length of the array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int arr2[n]={-1};
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        arr2[i]={-1};
    }


    for(int i=0;i<n;i++)
    {
        if(arr2[arr[i]]==-1)
        arr2[arr[i]]=i;
        else
        minidx=min(minidx,arr2[arr[i]]);
    }
    cout<<minidx<<endl;
    return 0;
}
