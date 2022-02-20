#include<iostream>
using namespace std;

int main()
{
    int arr[5];int i=0;
    for(i=0;i<5;i++)
    cin>>arr[i];
    int arr1=0;int max1=arr[0],min1=arr[0];
    for(int i=0;i<5;i++)
    {
        max1=max(max1,arr[i]);
        min1=min(min1,arr[i]);    
    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    cout<<sum-max1<<" "<<sum-min1<<endl;
    return 0;
}
    
    