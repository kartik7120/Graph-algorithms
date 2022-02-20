#include<iostream>
using namespace std;

void SievePrime(int n)
{
    int arr[100]={0};

    for(int i=2;i<=n;i++)
    arr[i]=i;

    for(int i=2;i*i<=n;i++)
    {
        for(int j=i*i;j<=n;j+=i)
        {
            if(arr[j]%i==0)
            arr[j]=1;
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(arr[i]!=1)
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the limit of the array\n";
    cin>>n;
    SievePrime(n);
    return 0;     
}