#include <iostream>
#include <vector>
using namespace std;

int MinimumNumberJumps(vector<int> &arr, int n)
{
    int count = 0;
    int i = 1;
    int temp = arr[0];
    if (temp == 0)
        return -1;
    for (; i < arr.size();)
    {
        count++;
        if (arr[i] + temp < arr.size())
        {
            temp = i;
            i = i + arr[i];
        }
        else
            break;
    }

    return count + 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << MinimumNumberJumps(arr, n) << '\n';

    return 0;
}