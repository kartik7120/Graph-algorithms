#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int TrappedWater(vector<int>, int);

int main()
{
    int n;
    cout << "Entre the length of the array\n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << TrappedWater(arr, n) << endl;
    return 0;
}

int TrappedWater(vector<int> arr, int n)
{
    stack<int> st;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        while (!st.empty() && arr[st.top()] < arr[i])
        {
            int cur = st.top();
            st.pop();
            if (st.empty())
            {
                break;
            }
            int diff = i - st.top() - 1; // height of the container
            ans+=(min(arr[st.top()],arr[i])-arr[cur])*diff; // size of the container
        }
        st.push(i);
    }
    return ans;
}