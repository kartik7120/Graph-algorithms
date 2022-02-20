#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 1;
    int c2(0), c3(0), c5(0);
    for (int i = 1; i <= n; i++)
    {
        dp[i] = min(dp[c2] * 2, min(dp[c3] * 3, dp[c5] * 5));

        if (2 * dp[c2] == dp[i])
            c2++;
        if (3 * dp[c3] == dp[i])
            c3++;
        if (5 * dp[c5] == dp[i])
            c5++;
    }

    cout << dp[n - 1] << '\n';

    return 0;
}