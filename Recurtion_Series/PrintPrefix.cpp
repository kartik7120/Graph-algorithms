#include <iostream>
#include <string>
using namespace std;

void Prefix(int ones, int zeros, int n, string ans)
{
    if (n == 0)
    {
        cout << ans << '\n';
        return;
    }
    if (ones == 0 && zeros == 0 || ones <= zeros)
    {
        string output = ans + "1";
        Prefix(ones + 1, zeros, n - 1, output);
    }
    else
    {
        string output1 = ans + "1";
        string output2 = ans + "0";
        Prefix(ones + 1, zeros, n - 1, output1);
        Prefix(ones, zeros + 1, n - 1, output2);
    }
}

int main()
{
    int n;
    cin >> n;

    Prefix(0, 0, n, "");
    return 0;
}