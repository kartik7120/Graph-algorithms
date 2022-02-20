#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    int sum = fibo(n - 1) + fibo(n - 2);
    
    return sum;
}

int main()
{
    int n;
    int a = 0;
    int b = 1;

    cin >> n;

    int ans = fibo(n);
    cout << ans << endl;
    return 0;
}