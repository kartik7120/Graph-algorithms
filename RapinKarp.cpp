#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#define m 10e9 + 7 // we will be divviding the value of out hashing function to avoid the posiibility of having a supicious hit and the value can get very large so avoid overflow of data we will mod the function
#define b 256      // base of our hashing to again avoid the possibility of having a supicious hit

void RabinKarp(string &s, string &t)
{
    int S = s.length(); // string to find in the pattern
    int T = t.length(); // pattern

    int HashofT = 0;
    int HashofS = 0;
    int powerofT = T - 1;
    int powerofS = T - 1;
    for (int i = 0; i < T; i++)
    {
        HashofT += (int)((t[i] - 'a') * pow(b, powerofT)) % (int)m; // will remain constant
        HashofS += (int)((s[i] - 'a') * pow(b, powerofS)) % (int)m; // sliding hash function and will change for each slide in the original string
        powerofT--;
        powerofS--;
    }
    powerofS = T - 1;
    if (HashofS == HashofT)
    {
        cout << "Pattern Found\n";
        return;
    }
    for (int i = 0; i < S - T; i++)
    {
        HashofS = (int)((HashofS - (s[i] - 'a') * pow(b, powerofS)) * b + pow(s[i + T - 1], 0)) % (int)m;
        if (HashofS == HashofT)
        {
            cout << "Pattern Found\n";
            break;
        }
    }
}

int main()
{
    string pattern = "dba";
    string original = "ccaccaaedba";
    RabinKarp(original, pattern);
    return 0;
}