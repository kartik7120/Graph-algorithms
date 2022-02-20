#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of n\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];
    }
    cout<<"Maximum value = "<<max<<endl;
    cout<<"Minimum value = "<<min<<endl;
    return 0;

}