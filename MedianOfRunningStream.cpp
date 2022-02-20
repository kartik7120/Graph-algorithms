#include <iostream>
#include <queue>
using namespace std;
//https://www.geeksforgeeks.org/median-of-stream-of-running-integers-using-stl/

priority_queue<int, vector<int>> p; // max heap
priority_queue<int, vector<int>, greater<>> q; // min heap
// 7 3 5 2

// 
void insert(int x)
{
    if (q.size() == p.size())
    {
        if (p.size() == 0)
        {
            p.push(x);
            return;
        }

        if (p.top() > x)
        {
            p.push(x);
        }
        else
            q.push(x);
    }
    else if (p.size() > q.size())
    {
        if (x >= p.top())
        {
            q.push(x);
        }
        else
        {
            int temp = p.top();
            p.pop();
            q.push(temp);
            p.push(x);
        }
    }
    else if (p.size() < q.size())
    {
        if (x <= q.top())
        {
            p.push(x);
        }
        else
        {
            int temp = q.top();
            q.pop();
            p.push(temp);
            q.push(x);
        }
    }
}

double Median()
{
    if (p.size() == q.size())
    {
        return (p.top() + q.top()) / 2.0;
    }
    else if (p.size() > q.size())
        return p.top();
    else// if (p.size() < q.size())
    {
        return q.top();
    }
}

int main()
{
    insert(5);
    cout<<Median()<<'\n';

    insert(10);
    cout<<Median()<<'\n';
    insert(15);
    cout<<Median()<<'\n';
    return 0;
}