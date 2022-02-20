#include <vector>
#include <iostream>
using namespace std;

vector<int> dp;

int Friends(int n)
{
    if (dp[n] != -1)
        return dp[n];
    if (n > 2)

        dp[n] = Friends(n - 1) + (n - 1) * Friends(n - 2);
    else
        dp[n] = n;
    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    dp = vector<int>(n+1, -1);

    cout << Friends(n) << '\n';

    return 0;
}