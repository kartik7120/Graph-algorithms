#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Case 2 : Sorting the vector elements on the basis of second element of pairs in ascending order.
There are instances when we require to sort the elements of vector on the basis of second elements of pair.
 For that, we modify the sort() function and we pass a third argument, a call to an user defined explicit function in the sort() function.
 */

bool mycompare(const pair<int ,int >a,const  pair<int ,int> b)
{
    return (a.second<b.second);
}

int main()
{
    vector<pair<int ,int>> v;

    int arr[]={10,20,30,1};
    int arr1[]={50,40,10,8};

    for(int i=0;i<4;i++)
    {
        v.push_back(make_pair(arr[i],arr1[i]));
    }
    sort(v.begin(),v.end(),mycompare);
    for(int i=0;i<4;i++)
    {
        cout<<(v[i].first)<<endl;
        cout<<(v[i].second)<<endl;
    }
    return 0;
}