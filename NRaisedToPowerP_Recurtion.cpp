#include <iostream>
using namespace std;
// Calculate the value of n till n raised to the power p

int power(int n, int p)
{
    if (p == 0)
        return 1;

    int sum = power(n,p-1);
    return n*sum;
}

int main()
{
    int n, p;
    cin >> n >> p;

    int ans = power(n, p);
    cout<<ans<<endl;
    return 0;
}