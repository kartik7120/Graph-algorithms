#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of days\n";
    cin>>n;
    cout<<"Enter the no of visitors\n";
    int arr[n+1];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    arr[n+1]=-1;
    int rb=0;
    int maxvis=0;
    for(int i=0;i<n;i++)
    {
        maxvis=max(maxvis,arr[i]);
        cout<<arr[i]<<endl;
        if(i==0){if(arr[i+1]>arr[i])rb++;}
        else
        if(maxvis==arr[i])
        {
            if(arr[i+1]<arr[i])
            rb++;
        }
    }
    cout<<rb<<" "<<endl;
    return 0;
}