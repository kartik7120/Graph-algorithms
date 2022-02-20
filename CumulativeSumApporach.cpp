#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int arr[n];// Original array
    int Cumulative_Sum_array[n];// Cumulative sum array
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int finalSum=0;// maximum sum of the subarrays
    int currentSum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            currentSum+=arr[j];
        }
        Cumulative_Sum_array[i]=currentSum;
        currentSum=0;
    }

    finalSum=Cumulative_Sum_array[n-1]-Cumulative_Sum_array[0];
    cout<<finalSum<<endl;
    return 0;
}