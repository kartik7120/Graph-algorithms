#include<iostream>
using namespace std;

void subset(int arr[],int n)
{
    for(int i=0;i<<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            cout<<arr[j]<<endl;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    subset(arr,n);
    return 0;

}