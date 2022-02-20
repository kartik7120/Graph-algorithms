#include<iostream>
using namespace std;

void countsubsets(int arr[],int n)// a set of n elements contains 2^n-1 subsets
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            cout<<arr[j]<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    int arr[4]={1,2,3,4};
    countsubsets(arr,4);
    return 0;
}