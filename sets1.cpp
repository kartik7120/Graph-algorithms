#include <iostream>
using namespace std;
#include <set>

int main()
{
    set<int> s;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; ++i)
    {
        int type, query;
        cin >> type >> query;
        switch (type)
        {
        case 1:
            s.insert(query);
            break;
        case 2:
            s.erase(query);
            break;
        case 3:
            cout << (s.find(query) == s.end() ? "No" : "Yes") << endl;
            break;
        }
        return 0;
    }
}