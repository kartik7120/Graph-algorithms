#include<iostream>
using namespace std;

bool check(int arr[],int n,int sumU)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j]+arr[i];
            if(sum==sumU)
            return true;
            else
            sum=0;
        }
    }
    return false;
}

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int arr[n];
    cout<<"ENter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sumUser=0;
    cout<<"Enter the sum to be checked\n";
    cin>>sumUser;

    bool ans=check(arr,n,sumUser);
    if(ans==1)
    cout<<"Found"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}