#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void SlidingWindow(vector<int>, int, int);

int main()
{
    int n;
    cout << "Enter the number of elements of the array\n";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k;
    cout << "Enter the value of k\n";
    cin >> k;
    SlidingWindow(v, n, k);
    return 0;
}

void SlidingWindow(vector<int> v, int n, int k)
{
    deque<int> q(k);
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && v[q.back()] <= v[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }

    for (int i = k; i < n; i++)
    {
        cout<<v[q.front()]<<" ";
        while(!q.empty() && q.front() <= i-k)
        {
            q.pop_back();
        }

        while(!q.empty() && v[q.back()] <= v[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }

    cout<<v[q.front()]<<'\n';
}