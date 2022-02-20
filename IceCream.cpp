#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> result(2);
    int m;
    for(int i=1;i<=t;i++)
    {
        cin>>m;
        int n;
        cin>>n;
        vector<int> arr(n);
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        int st=0;int en=n-1;
        for(int i=0;i<n;i++)
        {
            int sum=arr[st]+arr[en];
            if(sum==m)
            break;
            else 
            if(sum>m)
            {
                en--;
            }
            else 
            if(sum<m)
            {
                st++;
            }
        }
        cout<<(st+1)<<" "<<(en+1)<<endl;
      // result.push_back(st);
      // result.push_back(en);
    }
//return result;
}