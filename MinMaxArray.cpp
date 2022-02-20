#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;

void MinMax(vector<int> &arr, int n)
{
    //vector<int> MinArr;
    //vector<int> MaxArr;
    sort(arr.begin(), arr.end());

    vector<int> ans;

    int diff = n / 2;

    long long mn=0,mx=0;

    for(int i=0;i<(n/2);i++)
    {
        mx+=(arr[i+n/2]-arr[i]);
        mn+=(arr[i*2+1]-arr[i*2]);
    }

    cout<<mx<<" "<<mn<<" "<<endl;
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

    MinMax(arr, n);
    return 0;
}