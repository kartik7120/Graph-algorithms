#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;

    vector<int> v(n);

    cout<<"Enter the elements\n";

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> ans; //ans vector

    sort(v.begin(),v.end());

     do
     {
         ans.push_back(v);
     }
     while(next_permutation(v.begin(),v.end()));

     for(auto element : ans)
     {
         std::cout<<element<<" ";
     }
     return 0;
}