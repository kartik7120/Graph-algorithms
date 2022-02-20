#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Given an array and a value, find if there exits three numbers whose sum if
equal to the given value.
*/
bool ThreeSum(vector<int> arr,int target,int n)
{
    bool exist=false;int j=0;int k=0;int sum=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        int lo=i+1,hi=n-1;
        while(lo<hi)
        {
            int current=arr[i]+arr[lo]+arr[hi];
            if(current == target)
            return true;
            else
            if(current < target)
            {
                lo++;
            }
            else
            if(current > target)
            {
                hi--;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Entre the elements of the vector\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target\n";
    cin>>target;
    cout<<ThreeSum(arr,target,n);
    return 0;
}