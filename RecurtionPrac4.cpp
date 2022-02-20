#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0)
        return 1;

    int fact = fac(n - 1);
    return n * fact;
}

int main()
{
    int n;
    cin >> n;

    int ans = fac(n);
    cout << ans << endl;
    return EXIT_SUCCESS;
}