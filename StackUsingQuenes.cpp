#include<iostream>
#include<queue>
using namespace std;
//This is the meathod in which the push meathod is expensive
class Stack
{
    queue<int> q1;
    queue<int> q2;
    int n; // for storing size of the stack
    public:
    Stack()
    {
        n=0;
    }

    void push(int x)
    {
        q2.push(x);
        n++;
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue <int> temp;
        temp=q1;
        q1=q2;
        q2=temp;
    }

    int pop()
    {
        n--;
        int topele=q1.front();
        q1.pop();
        return topele;
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
    cout<<st.pop()<<endl;
    st.pop();
    st.pop();
    cout<<st.pop()<<endl;

    return 0;
}