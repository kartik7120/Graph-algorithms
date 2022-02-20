#include <iostream>
#include <stack>
#include<climits>
using namespace std;

bool Consequitive(int arr[], int n)
{
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        st.push(arr[i]);
    }
    if(n%2!=0)
    {
        st.pop();
    }

    while(!st.empty())
    {
        int n1=st.top();
        st.pop();
        int n2=st.top();
        st.pop();
        if(std::abs(n1-n2)!=1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Entre the value of n\n";
    cin >> n;
    int arr[n];
    cout << "Entre the vlaues of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   

    bool ans = Consequitive(arr, n);
    if (ans)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}