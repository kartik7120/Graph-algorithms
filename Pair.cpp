#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<pair<int,int>> v;

    v.push_back(make_pair(1,2));
    v.push_back(make_pair(2,3));
    v.push_back(make_pair(3,4));
    cout<<v.first<<endl;

    
    return 0;

    
}