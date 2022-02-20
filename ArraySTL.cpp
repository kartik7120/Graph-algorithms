#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,10>arr;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}