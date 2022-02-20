#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> q;

    int n;
    cin>>n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int k;
    cin >> k;
    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        q.push(arr[i]);
    }

    while (q.size() != 0)
    {
        sum += q.top();
        q.pop();
        count++;
        if (sum >= k)
        {
            break;
        }
    }
    cout<<count<<'\n';
    return 0;
}