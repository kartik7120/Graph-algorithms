#include <iostream>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
        return 1;

    int cal = power(n, p - 1);
    return n * cal;
}

int main()
{
    int n, p;
    cin >> n >> p;

    int ans = power(n, p);
    cout << ans << endl;
    return 0;
}