#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> v, int n)
{
    vector<int>::iterator it;
    for (it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    return;
}

void Permutation(vector<int> v, int n, int fact)
{
    for (int j = 1; j <= (fact/2); j++)
    {
        for (int i = 1; i < n; i++)
        {
            swap(v[i], v[i - 1]);
            print(v, n);
            cout << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int fact = 1;
    int i = n;
    while (i > 0)
    {
        fact = fact * i;
        i--;
    }
    Permutation(v, n, fact);
    return 0;
}