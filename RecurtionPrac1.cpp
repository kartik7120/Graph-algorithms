#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;

    int add = sum(n - 1);
    return n + add;
}

int main()
{
    int n;
    cin >> n;

    int ans = sum(n);
    cout << ans << endl;
    return 0;
}