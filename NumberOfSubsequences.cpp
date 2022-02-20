#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int e = 1, a = 0, ab = 0, abc = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            a += e;
        else if (s[i] == 'b')
            ab += a;
        else if (s[i] == 'c')
            abc += ab;
        else if (s[i] == '?')
        {
            abc = abc * 3 + ab;
            ab = ab * 3 + a;
            a = a * 3 + e;
            e = e * 3;
        }
    }

    cout << abc << '\n';
    return 0;
}