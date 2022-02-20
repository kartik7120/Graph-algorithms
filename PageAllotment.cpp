#include<iostream>
#include<climits>
using namespace std;

bool isFeasible(int arr[],int n,int m,int min){

    int studentRequired=1;int sum=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] > min)
        {
            return false;
        }
        if(sum +arr[i] > min)
        {
            studentRequired++;
            sum=arr[i];
            if(studentRequired > m)
            return false;
        }
        else
        sum+=arr[i];
    }
    return true;
}

int allocateMinimum(int arr[],int n,int m)
{
    int sum=0;
    if(n < m)
    {
        return -1;
    }

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    int start=0 ; int end=sum;int ans=INT_MAX;
    while(start <= end)
    {
        int mid=(start+end)/2;
        if(isFeasible(arr,n,m,mid)){

            ans=min(ans,mid);
            end=mid-1;
        }
        else
        start=mid+1;
    }

    return ans;
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
    int m;
    cin>>m;
    cout<<allocateMinimum(arr,n,m);
    return 0;
}