#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    do
    {
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" ";
        cout<<endl;
    }while(next_permutation(arr,arr+3));// we are not using begin() and end() because arr is itself a pointer or represents the 
                                       // address of the array arr

    return 0;
}