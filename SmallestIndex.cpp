#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int arr[n];
    int arr2[n]={-1};int index=INT_MAX;int count1=0;int count2=0;int pd=0;int pd1=1;
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        count1=i;
         for(int j=i;j<n;j++)
         {
              if(arr[i]==arr[j])
              count2=j;
         }
        pd=count2-count1;
        pd1=min(pd1,pd);
        
    }
    cout<<arr[pd1]<<endl;
    return 0;
}