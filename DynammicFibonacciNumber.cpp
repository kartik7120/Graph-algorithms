#include <iostream>
#include <vector>
using namespace std;

//https://www.geeksforgeeks.org/overlapping-subproblems-property-in-dynamic-programming-dp-1/
#define size 100

int dp[size];
//Memorization
int fibo(int n)
{
    if (dp[n] == -1)
    {
        if (n <= 1)
            dp[n] = n;
        else
            dp[n] = fibo(n - 1) + fibo(n - 2);
    }

    return dp[n];
}
// Tabulation
int fib(int n)
{
    int arr[n + 1];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[n];
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 100; i++)
        dp[i] = -1;

    cout << fibo(n) << '\n';

    cout << fib(n) << '\n';
    return 0;
}