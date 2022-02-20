#include <iostream>
#include <vector>
using namespace std;
#include <climits>
//Memorization
int dp[1000];

int MinSquare(int n)
{
    if (n == 0 || n == 1 || n == 2 || n == 3)
    {
        return n;
    }

    if (dp[n] != 1000)
        return dp[n];

    for (int i = 1; i * i <= n; i++)
    {
        dp[n] = min(dp[n], 1 + MinSquare(n - i * i));
    }

    return dp[n];
}

//Tabulation

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 1000; i++)
        dp[i] = 1000;

    cout << MinSquare(n) << '\n';

    int dp1[n + 1];
    for (int i = 0; i <= n; i++)
        dp1[i] = INT_MAX;

    dp1[0] = 0;
    dp1[1] = 1;
    dp1[2] = 2;
    dp1[3] = 3;
    for (int i = 1; i * i <= n; i++)
    {
        for (int j = 1; i * i + j <= n; j++)
        {
            dp[i * i + j] = min(dp[i * i + j], dp[j] + 1);
        }
    }
    cout << '\n';
    cout << dp[n] << " ";
    return 0;
}