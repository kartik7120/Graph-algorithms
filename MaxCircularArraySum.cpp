#include<iostream>
using namespace std;

int kadane(int arr[],int n)
{
    int currentSum=0;
    int finalSum=0;
    for(int i=0;i<n;i++)
    {
        currentSum+=arr[i];
        if(currentSum<0)
        currentSum=0;
        finalSum=max(finalSum,currentSum);
    }
    return finalSum;
}

int main()
{
    int n;
    cout<<"ENter the length of the array\n";
    cin>>n;
    int arr[n];
    cout<<"ENter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    // Maximum subarray sum = Total sum of the array - sum of non-contributing arrays

    //for eg -> if there is a array like {4,-4,6,-6,-11,12}, for circular array the sum of the array can also continue from 12 to 
    //4 to -4 and so on as if these elements were placed in a circle.
    
    // to the sum of non-contributing elements we will reverse the sign of the elements of the array and find the non contributing 
    //element using Kanade algorithm.

    int Negitivearr[n];// used to store elements of array but the sign of elements of the array are reversed.
    int totalsum=0;
    for(int i=0;i<n;i++)
    { totalsum+=arr[i];
      Negitivearr[i]=-arr[i];
    }
    int WrappedSum=0;int nonWrappedSum=0;
    for(int i=0;i<n;i++)
    {
        Negitivearr[i]=-arr[i];
    }

    nonWrappedSum=kadane(Negitivearr,n);// used for store sum of subarrays when non contributing elements are not wrapped

    WrappedSum=totalsum - (- nonWrappedSum);
    int ans=max(WrappedSum,nonWrappedSum);
    cout<<ans<<endl;
    return 0;
}