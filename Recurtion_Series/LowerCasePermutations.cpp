// LowerCasePermutations.
#include <iostream>
#include <string>
using namespace std;
#include <set>

set<string> s;

void LowerCasePermutations(string input, string output)
{
    if (input.length() == 0)
    {
        s.insert(output);
        return;
    }
    char temp;
    temp = input[0];
    if (temp >= 'A' && temp <= 'Z')
    {
        temp = temp + 32;
    }
    temp = tolower(input[0]);
    string output1 = output + temp;
    temp = toupper(input[0]);
    string output2 = output + temp;
    input.erase(input.begin() + 0);
    LowerCasePermutations(input, output1);
    LowerCasePermutations(input, output2);
}

int main()
{
    string str;
    cin >> str;
    LowerCasePermutations(str, "");
    set<string>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << ((*it)) << " ";
    }
    return 0;
}