#include <iostream>
#include <stack>
using namespace std;

int FindMaxArea(int arr[], int n)
{
    //int prevmax[n];
    //int nextmax[n];
    stack<int> st;
    int currentArea = 1; 
    int maxArea = 0;
    int width=1;
    for (int i = 0; i < n; i++)
    {
        st.push(arr[i]);
    }
    int temp=st.top();
    while (!st.empty())
    {
        temp=min(temp,st.top());
        if(st.top() <=temp)
        {
            currentArea*=st.top()*width;
            width++;
            st.pop();
        }
        else
        {
            maxArea=max(currentArea,maxArea);
            width=1;
            st.pop();
        }
    }
    return maxArea;
}

int main()
{
    int n;
    cout << "Enter the length of the array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << FindMaxArea(arr, n);
    return 0;
}