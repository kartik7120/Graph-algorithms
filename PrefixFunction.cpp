#include <iostream>
#include <vector>
using namespace std;

vector<int> prefix_function(string &str, int n)
{
    vector<int> pi(n, 0); // Prefix array
    pi[0] = 0;
    int j = 0;
    for (int i = 1; i < str.length();)
    {
        if (str[i] == str[j])
        {
            pi[i] = j + 1;
            j++;
            i++;
        }
        else if (j > 0)
        {
            j = pi[j - 1];
        }
        else
        {
            pi[i] = 0;
            i++;
        }
    }
    return pi;
}
// Time complexicity is reduced from O(m*n) to O(m+n)
int main()
{
    string str = "ababaca";
    string str2 = "bacbabababacaca";

    vector<int> prefix = prefix_function(str, str.length());
    for (int i = 0; i < prefix.size(); i++)
    {
        cout << prefix[i] << " ";
    }
    cout << '\n';
    int j = 0;
    for (int i = 0; i < str2.length();)
    {
        if (str2[i] == str[j])
        {
            if (j == str.length() - 1)
            {
                cout << "SubArray found\n";
                break;
            }
            else
            {
                i++;
                j++;
            }
        }
        else if (j > 0)
        {
            j = prefix[j - 1];
        }
        else
        {
            i++;
        }
    }
    cout << "Program ended\n";
    return 0;
}