#include <iostream>
using namespace std;

int Merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[]
    }
}

long long MergeSort(int arr[], int l, int mid, int r)
{
    long long inv = 0;
    if (l < r)
    {
        mid = (l + r) / 2;
        inv += MergeSort(arr, l, mid);
        inv += MergeSort(arr, mid + 1, r);
        inv += Merge(arr, l, mid, r);
    }
    return inv;
}

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << MergeSort(arr, 0, n - 1) << endl;
    return 0;
}