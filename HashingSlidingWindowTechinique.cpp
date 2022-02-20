#include<iostream>
#include<climits>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    int currSum=0;
    int Minsum=INT_MAX;

    for(int i=0;i<k;i++)
    {
        currSum+=arr[i];
    }
    Minsum=min(Minsum,currSum);

    for(int i=1;i<n-k;i++)
    {
        currSum=currSum-arr[i-1]+arr[i+k-1];
        Minsum=min(Minsum,currSum);
    }

    cout<<Minsum<<'\n';
    return 0;
}