#include <iostream>
#include <vector>
using namespace std;

int LCA(int i, int j, string &a, string &b)
{
    if (i == a.size() || j == b.size())
        return 0;

    if (a[i] == b[j])
        return 1 + LCA(i + 1, j + 1, a, b);
    else
        return max(LCA(i + 1, j, a, b), LCA(i, j + 1, a, b));
}

int main()
{
    int m, n;
    cout << "Enter the length of two array\n";
    cin >> m >> n;

    string a;
    string b;
    getline(cin, a);
    cin.ignore();
    getline(cin, b);

    cout << LCA(0, 0, a, b) << '\n';
    return 0;
}