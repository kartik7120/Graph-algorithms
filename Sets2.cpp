#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int,greater<int>> s; // greater compariter arranges the value of in desending order
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<'\n';
    //for finding the size of the set
    cout<<s.size()<<'\n';
    return 0;
}