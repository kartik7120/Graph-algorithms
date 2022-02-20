#include <iostream>
#include <vector>
using namespace std;

void Heapify(vector<int> &arr, int n, int i)
{
    int smallest = i;
    int l = (2 * i) + 1;
    int r = (2 * i) + 2;

    if (r < n && arr[r] < arr[smallest])
    {
        smallest = r;
    }

    if (l < n && arr[l] < arr[smallest])
    {
        smallest = l;
    }

    if (smallest != i)
    {

        swap(arr[i], arr[smallest]);
        Heapify(arr, n, smallest);
    }
}

void BuildHeap(vector<int> &arr, int n)
{
    int startIdx = (n - 1) / 2 - 1;

    for (int i = startIdx; i >= 0; i--)
    {
        Heapify(arr, n, i);
    }
}

int main()
{
    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    BuildHeap(arr, n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}