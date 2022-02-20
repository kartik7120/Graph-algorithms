#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the total number of discs\n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int arr1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr1=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr1;
            }
        }
    }

    cout<<"Enter the number to bbe searched\n";
    int m;
    cin>>m;
    int l=0;
    int u=n-1;

    for(int i=l;i<=u;i++)
    {
        int k=(l+u)/2;
        if(arr[k]==m)
        {
            cout<<"Number found\n"<<endl;
            break;
        }
        else
        if(arr[k]<m)
        l=k+1;
        else
        if(arr[k]>m)
        u=k-1;
    }
    return EXIT_SUCCESS;
}