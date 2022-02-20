#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<vector<int>> dp;

int MatrixChainMultiplication(vector<int> &arr, int i, int j)
{
    if (i == j)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    dp[i][j] = INT_MAX;

    for (int k = i; k < j; k++)
    {
        dp[i][j] = min(dp[i][j], MatrixChainMultiplication(arr, i, k) + MatrixChainMultiplication(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j]);
    }
    return dp[i][j];
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

    dp = vector<vector<int>>(n + 1, vector<int>(n + 1, -1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << MatrixChainMultiplication(arr, 1, n - 1) << '\n';

    vector<vector<int>> dp1(n + 1, vector<int>(n + 1, 0));

   // for (int i = 1; i < n; i++)
   // {
   //     for (int j = 0; j < n; j++)
   //     {
   //         for (int k = i; k < j; k++)
   //         {
   //             if (i != j)
   //             {
   //                 dp[]
   //             }
   //         }
   //     }
   // }
    return 0;
}