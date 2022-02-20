#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> dp;

int LCS(string &str, string &str2, int n, int m)
{
    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != 0)
        return dp[n][m];

    if (str[n - 1] == str2[m - 1])
        dp[n][m] = 1 + LCS(str, str2, n - 1, m - 1);
    else
        dp[n][m] = max(LCS(str, str2, n - 1, m), LCS(str, str2, n, m - 1));

    return dp[n][m];
}

int main()
{
    string str;
    string str2;
    cin >> str >> str2;

    int n = str.length();
    int m = str2.length();
    dp = vector<vector<int>>(n + 1, vector<int>(m + 1, 0));
    cout << LCS(str, str2, n, m) << '\n';
    return 0;
}