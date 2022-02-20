#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int dp[205][205][205];

int LCS(string &s1, string &s2, string &s3, int i, int j, int k)
{
    if (i == s1.length() || j == s2.length() || k == s3.length())
        return 0;
    if (s1[i] == s2[j] and s2[j] == s3[k])
        dp[i][j][k] = 1 + LCS(s1, s2, s3, i + 1, j + 1, k + 1);
    else
        dp[i][j][k] = max(LCS(s1, s2, s3, i + 1, j, k), max(LCS(s1, s2, s3, i, j + 1, k), LCS(s1, s2, s3, i, j, k + 1)));

    return dp[i][j][k];
}

int main()
{
    string s1;
    string s2;
    string s3;
    cin >> s1 >> s2 >> s3;
    //dp=vector<vector<vector<int>>>(s1.length(),vector<vector<int>>(s2.length(),-1),vector<vector<vector<int>>>(d3.length(),-1))
    memset(dp, -1, sizeof(dp));
    cout << LCS(s1, s2, s3, 0, 0, 0) << '\n';
    return 0;
}