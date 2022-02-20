#include <iostream>
using namespace std;

// Array Given ->

void DNF(int arr[], int low, int mid, int high,int n)
{
    while (mid != high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else
        if(arr[mid]==1)
        mid++;
        else
        if(arr[mid]==2)
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return ;
}

int main()
{
    int n;
    cout << "Enter the length of the array\n";
     cin >> n;

    int arr[n];

    cout << "Enter the array\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    DNF(arr, 0, 0, n - 1,n);
    return 0;
}