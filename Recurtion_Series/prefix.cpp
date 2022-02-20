#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int arr2[5];
    partial_sum(arr.begin(), arr.end(), arr2);
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}