#include<iostream>
using namespace std;
int count;
int sorted(int arr[],int n,int i)
{
    if(i==(n-1))
    return (i-1);
    int a=arr[0];
    int b=arr[i+1];
    if(a<b)
    {
        count++;
    }
    
    sorted(arr,n,i+1);
    return i;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    count++;
    sorted(arr,n,0);
    if(count==n)
    cout<<"Sorted array"<<endl;
    return 0;

}