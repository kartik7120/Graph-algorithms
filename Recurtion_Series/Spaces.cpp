#include <iostream>
// #include <string>
using namespace std;

int n;

void Spaces(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << " ";
        return;
    }

    // if (input.length() == n)
    // {
    //     string output1;
    //     output1 = input[0];
    //     input.erase(input.begin() + 0);
    //     Spaces(input, output1);
    // }

    string output1;
    output1 = output + input[0];
    string output2;
    output2 = output + "-" + input[0];
    input.erase(input.begin() + 0);
    Spaces(input, output1);
    Spaces(input, output2);
}

int main()
{
    string str;
    cin >> str;
    n = str.length();
    cout << n << " ";
    string output;
    output = output + str[0];
    str.erase(str.begin() + 0);
    Spaces(str, output);

    return 0;
}