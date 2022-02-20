#include<iostream>
#include<set>
using namespace std;
// for finding upper and lower bound of a set
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(5);
    cout<<*s.lower_bound(2)<<'\n'; // will print number smaller than 2 i.e. it's lower bound
    cout<<*s.lower_bound(3)<<'\n';
    cout<<*s.upper_bound(3)<<'\n';
    cout<<(s.upper_bound(5) == s.end())<<'\n';
    return 0;
}