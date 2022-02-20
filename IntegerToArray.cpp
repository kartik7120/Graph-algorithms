#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100]={0};

    int i=0;
    while(n!=0)
    {
        arr[i]=n%10;
        n=n/10;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}