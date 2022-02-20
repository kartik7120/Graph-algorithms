#include<iostream>
#include<climits>
using namespace std;

bool isPossible(int arr[],int n,int m,int min)
{
    int sum=0;
    int painters = 1;

    for(int i=0;i<n;i++)
    {
        if(arr[i] > min)
        {
            return false;
        }
        if(sum+arr[i] > min)
        {
            painters++;
            sum=arr[i];

            if(painters > m)
            return false;
        }
        else
        {
            sum+=arr[i];
        }
    }
    return true;
}

int painter(int arr[],int n,int m)
{
    if(n < m)
    {
        return -1;
    }

    int totalLength=0;int k=0;
    for(int i=0;i<n;i++)
    {
        k=max(k,arr[i]);
        totalLength+=arr[i];
    }
// 10 20 30 40   m = 2   n = 4 
    int low=k;int high=totalLength;int ans=INT_MAX;

    while(low < high)
    {
        int mid=(low+high)/2;

        if(isPossible(arr,n,m,mid))
        {
            ans=min(ans,mid);
            high=mid-1;
        }
        else
        low=mid+1;
    }
    return ans;
}

int main()
{
    int arr[]={10,20,30,40};
    cout<<painter(arr,4,2);
    return 0;
}