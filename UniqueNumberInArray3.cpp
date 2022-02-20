#include<iostream>
using namespace std;

void SetBit(int n,int i)
{
    cout<<(n|(1<<i))<<endl;
}
bool GetBit(int n,int i)
{
    return (n&(1<<i))!=0;
}

void unique(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<64;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(GetBit(arr[j],i))
            sum++;
        }
        if(sum%3!=0)
        SetBit(0,i);
        sum=0;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    unique(arr,n);
    return 0;
}