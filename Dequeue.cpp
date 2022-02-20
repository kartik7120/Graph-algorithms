#include<iostream>
#include<deque>
using namespace std;

//Dequeue is a type of data structure which is combination of stacks and quene 
//Insertion and deletion can take place from the start as well as from the end

int main()
{
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.pop_front();
    dq.pop_back();
    cout<<dq.front()<<endl;
    return 0;
}