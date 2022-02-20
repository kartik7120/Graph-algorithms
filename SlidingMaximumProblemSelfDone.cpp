#include <iostream>
#include <deque>
#include <vector>
using namespace std;
// https://www.youtube.com/watch?v=MCvGwtkqJS0 For explaination of the the deque apporach of the question
// Our final answer vector will contain n-k+1 elements
void SlidingMaximum(vector<int> v, int n, int k)
{
    deque<int> q; //used for storing indices of the useful elements

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
        while(!q.empty() && q.front()<= (i-k))
        {
            q.pop_back();
        }
        while(!q.empty() && v[q.back()]<=v[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements of the array\n";
    cin >> n;

    vector<int> v(n);
    cout << "Entre the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k;
    cout << "Entre the value of k\n";
    cin >> k;

    SlidingMaximum(v, n, k);
    return 0;
}