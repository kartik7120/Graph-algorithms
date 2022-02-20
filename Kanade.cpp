#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of terms\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int currentSum=0;
    int finalSum=0;
    for(int i=0;i<n;i++)
    {
        currentSum+=arr[i];
        if(currentSum<0)
        currentSum=0;
        finalSum=max(finalSum,currentSum);
        
    }
    cout<<finalSum<<endl;
    return 0;
}