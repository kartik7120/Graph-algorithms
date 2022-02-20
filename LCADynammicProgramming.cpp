#include <iostream>
#include <vector>
using namespace std;

int dp[1000];

int LCA(vector<int> &a, int n)
{
    if (dp[n] != -1)
        return dp[n];

    dp[n] = 1; // A single element can also be considered as a subsequence

    for (int i = 0; i < n; i++)
    {
        if (a[n] > a[i])
            dp[n] = max(dp[n], 1 + LCA(a, i));
    }
    return dp[n];
}

int main()
{
    int m, n;
    cout << "Enter the length of two array\n";
    cin >> m >> n;

    vector<int> a(m, 0);
    // vector<int> b(n, 0);
    for (int i = 1; i < 1000; i++)
    {
        dp[i] = -1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> b[i];
    // }

    cout << LCA(a, n) << '\n';
    return 0;
}