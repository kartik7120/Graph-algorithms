#include <iostream>
#include <string>
using namespace std;

void PrintingSubString(string str)
{
    int n = str.length();
    string temp = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            temp += str[j];
            cout << temp << " ";
        }
        temp = "";
    }
}

int main()
{
    string str;
    cin >> str;

    PrintingSubString(str);
    return 0;
}