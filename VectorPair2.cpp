#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool mycompare(pair <int ,int >p1,pair <int ,int >p2)
{
    return p1.first<p2.first;
}

int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};

    vector <pair<int, int>> v; // we can a vector of pair

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {  
         v.push_back(make_pair(arr[i],i));                                           // First apporach
                                                                                     //pair<int, int> p;
                                                                                     //p.first = arr[i];
                                                                                     // p.second = i;
    }
    sort(v.begin(),v.end(),mycompare);//my compare is the comparer which tells in what way the array has to be sorted

    for(int i=0;i<v.size();i++)
    {
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++)
    cout<<arr[i]<<" ";
    return 0;
}