#include <iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int u)
{
    int n1 = mid - l + 1;
    int n2 = u - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;i++;
        }
        else
        if(a[i]>b[j])
        {
            arr[k]=b[j];
            k++;j++;
        }
    }

    while(i<n1)
    {
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int l, int u)
{
    if (l < u)
    {
        int mid = (l + u) / 2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, u);
        Merge(arr, l, mid, u);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the element of the arary\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MergeSort(arr, 0, n );
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}