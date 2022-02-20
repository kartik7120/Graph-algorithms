#include <iostream>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <class T>
using tree = <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>

    int main()
{
    tree<int> s;
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int t;
            cin >> t;
            s.insert(t);
        }
        else if (c == 2)
        {
            int t;
            cin >> t;

            cout << *s.find_by_order(t) << '\n';
        }
    }

    return 0;
}