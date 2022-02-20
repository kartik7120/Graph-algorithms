#include <iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid + 1;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + j];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
    }

    while (i < n1 && j < n2)
    {
        if (a[i] > b[j])
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
    }

    while (j < n2)
    {
        if (a[i] > b[j])
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
}

void MergeSort(int arr[], int l, int r)
{
    int mid = (l + r) / 2;
    if (l < r)
    {
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, r);
    }
    Merge(arr, l, mid, r);
}

int main()
{
    int n;
    cout << "Enter the length of the array\n";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    MergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}