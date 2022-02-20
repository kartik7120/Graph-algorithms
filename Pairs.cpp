#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


/*Case 1 : Sorting the vector elements on the basis of first element of pairs in ascending order.
This type of sorting can be achieved using simple “ sort() ” function.
 By default the sort function sorts the vector elements on basis of first element of pairs.
 */
int main()
{
    vector<pair<int ,int >> v;

    int arr[]={10,20,30,40};
    int arr1[]={50,40,60,6,};
    for(int i=0;i<4;i++)
    {
        v.push_back(make_pair(arr[i],arr1[i]));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<4;i++)
    {
        cout<<v[i].first<<endl;
        cout<<v[i].second<<endl;
    }
    return 0;
}