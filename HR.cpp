#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    cin>>arr[i];
    int arr1=0;
    {
    for(int i=0;i<5;i++)
        for(int j=0;j<5-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr1=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr1;
            }
        }
    }

    int sum1=0;int sum2=0;int c=0;int d=1;
    for(int i=0;i<5;i++)
    {

        if(c<=(5-2))
        sum1=sum1+arr[c];
        c++;
        if(d<=(5-1))
        sum2=sum2+arr[d];
        d++;
    }
    cout<<sum1<<" "<<sum2<<endl;
}