#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<string> s;

void PrintingUniqueSubsets(string input, string output)
{
    if (input.length() == 0)
    {
        s.insert(output);
        return;
    }

    string output1 = output;
    string output2 = output + input[0];

    input.erase(input.begin() + 0);
    PrintingUniqueSubsets(input, output1);
    PrintingUniqueSubsets(input, output2);
}

int main()
{
    string str;
    cin >> str;

    PrintingUniqueSubsets(str, "");

    set<string>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    return 0;
}