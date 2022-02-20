#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>> p;

    p.push(3);
    p.push(2);
    p.push(99);
    cout<<p.top()<<'\n';
    p.pop();
    cout<<p.top()<<'\n';

    priority_queue<int,vector<int>,greater<int>> q;

     q.push(3);
    q.push(2);
    q.push(99);
    cout<<q.top()<<'\n';
    q.pop();
    cout<<q.top()<<'\n';
    return 0;
}