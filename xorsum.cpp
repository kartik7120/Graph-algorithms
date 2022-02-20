#include<iostream>
using namespace std;

int main()
{
    int arr[]={12,3,7,1,6,9};int sum=0;
    for(int i=0;i<6;i++)
    {
        sum=sum|arr[i];
    }
    cout<<sum;
    return 0;
}