#include <iostream>
#include <vector>
#include <stack>
using namespace std;

/*
Given an array of non negitive integers representing an elevation map where 
the width of each bar is 1, compute how much water it can trap after raining.
For more information on the question :-
https://www.geeksforgeeks.org/trapping-rain-water/
*/

int TrappedWater(vector<int> arr, int n)
{
    stack<int> st;
    int count2 = 0;
    int currMax = 0;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (st.empty())
        {
            st.push(i);
            currMax = max(currMax, arr[i]);
        }
        else if (currMax > arr[i])
        {
            st.push(i);
        }
        else if (currMax <= arr[i])
        {
            while (!st.empty())
            {
                count += currMax - arr[st.top()];
                st.pop();
            }
            currMax = arr[i];
        }
    }
    if (!st.empty())
    {
        while (!st.empty())
            st.pop();

        currMax = 0;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            if (st.empty())
            {
                st.push(i);
                currMax = max(currMax, arr[i]);
            }
            else if (currMax > arr[i])
            {
                st.push(i);
            }
            else if (currMax <= arr[i])
            {
                while (!st.empty())
                {
                    count2 += currMax - arr[st.top()];
                    st.pop();
                }
                currMax = arr[i];
            }
        }
    }
    return count + count2;
}

int main()
{
    int n;
    cout << "Enter the length of the array\n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    cout << TrappedWater(arr, n) << endl;
    return EXIT_SUCCESS;
}
// vector<int> leftMax;
// vector<int> rightMax;
// int maxHeight = -1;
// int minHeight = -1;
// for (int i = 0; i < arr.size(); i++)
// {
//     for (int j = i; j >= 0; j--)
//     {
//         maxHeight = max(maxHeight, arr[i]);
//         leftMax.push_back(maxHeight);
//     }
//
// }