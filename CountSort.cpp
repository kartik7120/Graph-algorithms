#include <iostream>
using namespace std;

void CountSort(int arr[], int n)
{
    // we will first declear an array of size whose length will be equal to the maximum value of the element in the array

    int maxnum = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxnum < arr[i])
            maxnum = arr[i];
    }

    int CountArray[maxnum]; // A count array initiased with the storing the no of times an element has occured in the array arr

    for(int i=0;i<maxnum;i++)
    {
        CountArray[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        CountArray[arr[i]]++;
    }

    int ModifiedCountArray[maxnum]={0}; // For storing the sum of values of the count array
    int sum = 0;
    int maxsum = 0;
    for (int i = 0; i < maxnum; i++)
    {
        sum=sum+arr[i];
        ModifiedCountArray[i]=sum;
    }

    int SortedArray[n]; // For storing the sorted array

    for(int i=n-1;i>=0;i--)
    {
        int temp =arr[i]; // for storing last element of the unsorted array
        int indexNew = ModifiedCountArray[temp]; // Index of the element storing in the Sorted Array
        SortedArray[--indexNew]=temp; // storing element in the unsorted array
    }

    for(int i=0;i<n;i++)
    {
        cout<<SortedArray[i]<<" "; //Printing the sorted array
    }
}

int main()
{
    int n;
    cout << "Enter the length of the array\n";
    cin >> n;

    int arr[n];

    cout << "Enter the element of the array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    CountSort(arr, n);
    return EXIT_SUCCESS;
}