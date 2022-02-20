#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<vector<int>> v;

    for(int i=0;i<5;i++)
    {
        int start,end;
        cin>>start>>end;
        v.push_back({start,end});// using curly braces also works for storing a 2D vector
    }

    sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b)
    {
        return a[1] < b[1];
    });

    
    return 0;
}