#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int Curr = 0;
    int MaxSum = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        Curr += arr[i];

        if (Curr < 0)
        {
            MaxSum = max(MaxSum, Curr);
            Curr = 0;
        }
        else if (Curr > MaxSum)
        {
            MaxSum = max(MaxSum, Curr);
        }
    }
    cout << MaxSum << '\n';
    return 0;
}