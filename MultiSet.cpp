#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << '\n';
    // if we erase 3 which is present multiple times in the multiset using erase operation then all instances of it will be deleted
    //  s.erase(3);
    //  for(auto i:s)
    //  {
    //      cout<<i<<" ";
    //  }

    // if we want to delete 3 but only one instance of it and not all then we can use the find() fucntion
    s.erase(s.find(3)); // find() is going to tell us that where the first instance 3 is present and then it will be deleted
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}