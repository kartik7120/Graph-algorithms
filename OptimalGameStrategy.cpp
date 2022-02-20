#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> dp;
int Choice(int i, int j, vector<int> &arr)
{
    if (i == j)
        return arr[i];

    if (i > j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];

    int l = arr[i] + min(Choice(i + 2, j, arr), Choice(i + 1, j - 1, arr));

    int r = arr[j] + min(Choice(i, j - 2, arr), Choice(i + 1, j - 1, arr));

    dp[i][j] = max(l, r);
    return dp[i][j];
}

int main()
{
    int n;
    cout << "Enter the numbre of coins\n";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    dp = vector<vector<int>>(100, vector<int>(100, -1));
    cout << Choice(0, 3, arr) << '\n';
    return 0;
}