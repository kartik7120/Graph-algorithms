#include<iostream>
using namespace std;
// Brute force apporach

bool check(int arr[],int n,int k)
{
    int sum=0;
    int i=1;
    while(i<n)
    {
        sum+=arr[i]+arr[i-1];
        if(sum==k)
        {
            return true;
        }
        else{sum=0;}
        i++;
    }

    return false;
    
}

int main()
{
     int n;
     cin>>n;
     int q=0;
     int arr[n];
     for(int i=0;i<n;i++)
     cin>>arr[i];
     cout<<"Enter the sum"<<endl;
     cin>>q;
     bool t=check(arr,n,q);
     if(t==1)
     cout<<"Found"<<endl;
     else
     cout<<"No"<<endl;
     return 0;
}