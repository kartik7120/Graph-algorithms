#include <iostream>
#include <unordered_set>
using namespace std;
/*
The unordered takes advantage over ordered set in the Time complexicity

Insertion and deletion takes O(1) and worst case O(N) if experience a lot of collision in hashing

All operation of sets and multiset can be implemented except Lower and Upper bound functions cannot be implemented as it is not sorted
*/

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << '\n';
    s.erase(2);
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}