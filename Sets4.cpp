#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.erase(2);         // erases element 2
    s.erase(s.begin()); // erases pointer at the beginning
    for (auto i : s)
    {
        cout << i << " ";
    }
    // cout << s[0] << '\n';
    return 0;
}