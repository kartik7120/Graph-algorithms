#include <iostream>
using namespace std;

void FindArray(int arr[], int n, int k)
{
    int start = 0;
    int end = 0;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    if (sum % 3 == 0)
    {
        cout << "Subarray exist\n";
        return;
    }

    for (int j = k; j < n; j++)
    {
        sum =sum+ arr[j] - arr[j - k];

        if (sum % 3 == 0)
        {
            cout << "Subarray exist\n";
            break;
        }
    }
}

int main()
{
    int arr[]={84,23,45,12,56,82};

    FindArray(arr,6,3);
    return 0;
}