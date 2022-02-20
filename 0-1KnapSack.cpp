#include <iostream>
#include <vector>
using namespace std;
#include <climits>
int dp[1000][1000];

int KnapSack(int n, int W, vector<int> &weight, vector<int> &value)
{
    if (W <= 0)
        return 0;

    if (n <= 0)
        return 0;

    if (weight[n - 1] > W)
    {
        dp[n][W] = KnapSack(n - 1, W, weight, value);
    }
    else
    dp[n][W] = max((KnapSack(n - 1, W, weight, value)), (KnapSack(n - 1, W - weight[n - 1], weight, value) + value[n - 1]));
    return dp[n][W];
}

int main()
{
    int n;
    cout << "Enter the number of items\n";
    cin >> n;
    vector<int> value(n, 0);
    vector<int> weight(n, 0);

    for (int i = 0; i < n; i++)
    {
        int wt;
        int val;
        cin >> wt >> val;
        value[i] = val;
        weight[i] = wt;
    }

    cout << "Enter the weight of the knapsack\n";
    int W;
    cin >> W;

    cout << KnapSack(n, W, weight, value) << '\n';
    return 0;
}