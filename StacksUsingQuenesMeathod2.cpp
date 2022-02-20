#include<iostream>
#include<queue>
using namespace std;
// In this meathod the pop operation is expensive
class Stack
{
    queue<int> q1;
    queue<int> q2;
    int n;
    public:
    Stack()
    {
        n=0;
    }

    void push(int val)
    {
        q1.push(val);
        n++;
    }

    void pop()
    {
        if(q1.empty())
        return ;
        if(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        q1.swap(q2);
        n--;
    }

    int top()
    {
        if(q1.empty())
        return -1;
        if(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int temp= q1.front();
        q2.push(temp);
        q1.swap(q2);
        return temp;
    }

    int size()
    {
        return n;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;

    return 0;
}