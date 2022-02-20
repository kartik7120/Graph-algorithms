#include <vector>
#include <iostream>
using namespace std;

//Last non-leaf node = parent of last-node.
//or, Last non-leaf node = parent of node at (n-1)th index.
//or, Last non-leaf node = Node at index ((n-1) - 1)/2 = (n/2) - 1.

//class heap
//{
//public:
//    int *arr;
//    int count;
//    int capacity;
//    int Heap_type;
//};

void heapify(vector<int>&arr, int n, int i)
{
    int largest = i;// root node of the max heap
    int l = (2 * i) + 1; 
    int r = (2 * i) + 2;

    if(l < n && arr[l] > arr[largest])
    {
        largest=l;
    }

    if(r<n && arr[r] > arr[largest])
    {
        largest=r;
    }

    if(largest != i)
    {
        swap(arr[i],arr[largest]);

        heapify(arr,n,largest);
    }
}

void BuildHeap(vector<int> &arr, int n)
{
    int startIdx = (n / 2) - 1; //index of the last non leaf node

    for (int i = startIdx; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}

void printHeap(vector<int>arr)
{
    for(auto i:arr)
    {
        cout<<i<<" ";
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
    BuildHeap(arr,n);
    printHeap(arr);
    return 0;
}
