#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int number=0;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>number;
        v.push_back(number);
    }
    int x;
    cin>>x;
    int a,b;
    cin>>a>>b;
    
    
    v.erase(v.begin()+x);
    for(int i=0;i<n;i++)
    {
        cout<<(v.at(i))<<" ";
    }
    v.erase(v.begin()+a,v.end()+b);
    for(int i=0;i<n;i++)
    {
        cout<<v.at(i)<<" ";
    }
    return 0;
}