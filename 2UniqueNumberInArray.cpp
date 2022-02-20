#include<iostream>
using namespace std;

int GetBit(int n,int i)
{
    return (n&(1<<i))!=0;
}

void unique(int arr[],int n)
{
    int xorsum=0;//used to store xor of two unique numbers
    for(int i=0;i<n;i++)
    xorsum=xorsum^arr[i];
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1)
    {
        setbit=xorsum & 1;
        pos++;
       xorsum = xorsum>>1;
        
    }
    for(int i=0;i<n;i++)
    {
        if(GetBit(arr[i],pos-1))
        {
            xorsum=xorsum^arr[i];
        }
    }

    cout<<xorsum<<endl;
    cout<<(xorsum^tempxor)<<endl;
}
 
int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;

    int arr[n];
    cout<<"ENer the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    unique(arr,n);
    return 0;
}