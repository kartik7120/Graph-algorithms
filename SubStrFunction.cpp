#include <iostream>
#include <vector>
using namespace std;

//Very important function for finding substr of the string
// Time complexiciy is O(S * T)
// Time complexcity can be informed using KMP algorithm
int main()
{
    string s = "na";
    string t = "apna collegena";
    // na is present in s at 2 and 12 index

    int T = t.size(); // 14
    int S = s.size(); // 2
    for (int i = 0; i < T - S + 1; i++)
    {
        if (t.substr(i, S) == s)
            cout << "s string found at " << i << '\n';
    }
    return 0;
}