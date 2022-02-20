#include <iostream>
using namespace std;
// Calculate sum of n numbers using recurtion
// https://www.geeksforgeeks.org/recursion/ -> all basics topices regarding recurtion
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int previousSum = sum(n-1);
    return n + previousSum;
}

int main()
{
    int n;
    cout << "ENter the value of n\n";
    cin >> n;
    int ans = sum(n);
    cout << ans << endl;
    return 0;
}