#include <iostream>
#include <vector>
using namespace std;

int TrappedWater(vector<int> arr, int n)
{
    int leftMax = 0;
    int rightMax = 0;
    int count = 0;
    int lo = 0;
    int hi = n - 1;

   // for (int i = 0; i < n; i++)
   // {
   //     leftMax = max(leftMax, arr[i]);
   // }
//
   // for (int i = n - 1; i >= 0; i--)
   // {
   //     rightMax = max(rightMax, arr[i]);
   // }

    for(int i=lo;i<=hi;)
    {
        if(arr[lo] < arr[hi])
        {
            if(arr[lo]>leftMax)
            {
                leftMax=arr[lo];
            }
            else
            count+=leftMax-arr[lo];
            lo++;
        }
        else
        {
            if(arr[hi]>rightMax)
            {
                rightMax=arr[hi];
            }
            else
            count+=rightMax-arr[hi];
            hi--;
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the length of the array\n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    cout << TrappedWater(arr, n) << endl;
    return EXIT_SUCCESS;
}