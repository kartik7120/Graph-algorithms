#include <iostream>
#include <string>
using namespace std;

void BalancedParenthesis(int open, int closed, string str)
{
    if (open == 0 && closed == 0)
    {
        cout << str << " ";
        return;
    }

    if (open != 0)
    {
        string output1 = str + "(";
        // string output2 = str + ")";
        BalancedParenthesis(open - 1, closed, output1);
        // BalancedParenthesis(open, --closed, output2);
    }
    // else
    if (open < closed)
    {
        string output1 = str + ")";
        BalancedParenthesis(open, closed - 1, output1);
    }
}

int main()
{
    int n;
    cin >> n;

    BalancedParenthesis(n, n, "");
    return 0;
}