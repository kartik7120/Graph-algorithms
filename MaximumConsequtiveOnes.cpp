#include <iostream>
#include<vector>
using namespace std;

/*
Given an array A of 0's and 1's, we may change up to K values from 0 to 1

Return the length of the longest (contiguous) subarray that contains only 1's

A={1,1,1,0,0,0,1,1,1,1,1,0}, K=2
Output: 6
Explaination : {1,1,1,0,0,1,1,1,1,1,1}
*/

//We used the concept of sliding windows to solve window

int CountConsequtive(int arr[], int n, int k)
{
    int ans=0;int zeroCount=0;int j=0;int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==0)
        zeroCount++;
        while(zeroCount> k)
        {
            if(arr[i]==0)
            zeroCount--;
            i++;
        }
        ans=max(ans,j-i+1);
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the value of K\n";
    cin >> k;
    cout << CountConsequtive(arr, n, k) << endl;
    return 0;
}