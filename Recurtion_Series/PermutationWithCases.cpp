#include <iostream>
using namespace std;

void PermuationCases(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << " ";
        return;
    }

    string output1 = output + (input[0]);
    char ch = input[0] - 32;
    string output2 = output + (ch);

    input.erase(input.begin() + 0);
    PermuationCases(input, output1);
    PermuationCases(input, output2);
}

int main()
{
    string str;
    cin >> str;

    PermuationCases(str, "");
    return 0;
}