#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

bool isNumberPerfect(int num)
{
    int sum=0;

    for(int i=1;i<sqrt(num);i++)
    {
        if(num%i==0)
        sum+=i;
    }
    if(sum==num)
    {
        return true;
    }
    else
    return false;
}

void PerfectArray(vector<int> arr,int k)
{
    int maxsum=INT_MIN;

    for(int i=0;i<arr.size();i++)
    {
        if(isNumberPerfect(arr[i]))
        {
            arr[i]=1;
        }
        else
        arr[i]=0;
    }

    int sum=0;
    int start=0;

    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }

     maxsum=max(maxsum,sum);

    for(int i=k;i<arr.size();i++)
    {
        sum=sum+arr[i]-arr[i-k];
        maxsum=max(maxsum,sum);
    }
    cout<<maxsum<<'\n';
}

int main()
{
    vector<int> arr={28,2,3,6,496,99,8128,24};
    PerfectArray(arr,4);
    return 0;
}