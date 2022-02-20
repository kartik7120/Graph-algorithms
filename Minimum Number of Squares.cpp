#include <iostream>
#include <vector>
using namespace std;
#include <climits>

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

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 1000; i++)
        dp[i] = 1000;

    cout << MinSquare(n) << '\n';
    return 0;
}