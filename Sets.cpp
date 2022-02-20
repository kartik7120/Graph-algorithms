#include<iostream>
#include<set>
using namespace std;
// Time complexicity of the insertion , deletion and Lower bound / Upper Bound is O(log N) and printing will be O(NlogN) as we are first finding and then deleting
int main()
{
    set<int>  s;
    s.insert(1);
    s.insert(2); // in the set has all unique numbers
    s.insert(2);
    s.insert(3);

    for(auto i:s)
    cout<<i<<" ";
    cout<<'\n';
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<'\n';
    for(auto i=s.rbegin(); i!=s.rend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<'\n';
    return 0;
}