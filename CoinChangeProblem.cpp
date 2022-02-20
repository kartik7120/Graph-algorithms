#include <iostream>
#include <vector>
using namespace std;

#define size 10e3
int dp[100][100];

int CoinChange(vector<int> &s, int n, int value)
{
    if (value == 0)
        return 1;

    if (value < 0)
        return 0;

    if (n <= 0 && value >= 1)
        return 0;

    if (dp[n][value] != -1)
        return dp[n][value];

    dp[n][value] = CoinChange(s, n - 1, value) + CoinChange(s, n, value - s[n - 1]);

    return dp[n][value];
}

int main()
{
    int n;
    cin >> n;

    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            dp[i][j] = -1;
        }
    }
    int value;
    cin >> value;

    cout << CoinChange(s, n, value) << '\n';

    // int dp1[n + 1][value + 1];
    vector<vector<int>> dp1(n + 1, vector<int>(value + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= value; j++)
        {
            if (j - s[i - 1] >= 0)
            {
                dp1[i][j] += dp1[i][j - s[i - 1]];
            }
        }
    }

    cout << dp[value - 1] << '\n';
    return 0;
}