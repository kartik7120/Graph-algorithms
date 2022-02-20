#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int maxn=-1;int c=0;
    for(int i=0;i<n;i++)
    {
        
        if(i==0)
        {
            if(arr[i]>arr[i+1])
            c++;
        }
        else
        {
            if(maxn<arr[i])
                if(arr[i]>arr[i+1])
                    c++;
                    maxn=max(maxn,arr[i]);
        }
    }
    cout<<"DAy breakers ="<<" "<<c<<endl;
    return 0;
}