#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isFeasible(int mid, vector<int> arr, int n, int k)
{
    int pos = arr[0];

    int element = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= mid)
        {
            pos = arr[i];
            element++;
            if (element == k)
                return true;
        }
    }
    return 0;
}

int largestMinDist(vector<int> arr, int n, int k)
{
    int res = -1;
    int left=1;
    int right=arr[n-1];

    while(left < right)
    {
        int mid=(left+right)/2;

        if(isFeasible(mid,arr,n,k))
        {
            res=max(res,mid);
            left=mid+1;
        }
        else
        right=mid;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    cout<<largestMinDist(arr,n,3)<<'\n';
    return 0;
}