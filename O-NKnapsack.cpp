#include <iostream>
#include <vector>
using namespace std;

//int KnapSack(int n, int W, vector<int> &value, vector<int> &weight)
//{
//    if(n==0)
//    return 0;
//
//
//}

int main()
{
    int n;
    cin >> n;

    vector<int> value(n, 0);
    vector<int> weight(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
        cin >> weight[i];
    }

    int W;
    cin >> W;

    vector<int> dp(W + 1, 0);

    for (int i = 0; i <= W; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - weight[j] >= 0)
            {
                dp[i] = max(dp[i], value[j] + dp[i - weight[j]]);
            }
        }
    }

    cout << dp[W];

    return 0;
}