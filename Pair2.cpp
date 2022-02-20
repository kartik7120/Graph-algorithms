#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main()
{
    pair<int ,int> mypair={1,2};

    int a,b;

   std::tie(a,b)=mypair;
    cout<<a<<" "<<b<<endl;
    return 0;
}