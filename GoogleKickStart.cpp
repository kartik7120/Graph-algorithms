#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Emter the length of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    int count=2;
    int final=0;
    int j=2;
    while(j<n)
    {
        if(pd==(arr[j]-arr[j-1]))
        {
            count+=1;
        }
        else
        {
            pd=arr[j]-arr[j-1];
            count=2;
        }
        final=max(final,count);
        j++;
    }
    cout<<final<<endl;
}