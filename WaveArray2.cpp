#include <iostream>
using namespace std;

void WaveSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            i++;
        }
    }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        return;
    
}

    int main()
    {
        int n;
        cout << "Enter the length of the array\n";
        cin >> n;


        int arr[n];

        cout << "Enter the elements of the array\n";

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        WaveSort(arr, n);
        return 0;
    }