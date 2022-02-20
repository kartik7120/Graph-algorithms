#include<iostream>
#include<stack>
using namespace std;

class quene
{
    stack<int> st1;
    stack<int> st2;

    public:
    
    void push(int x)
    {
        st1.push(x);
    }

    int pop()
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"Quene is empty\n";
            return -1;
        }
        if(st2.empty())
        {
            while(!st1.empty())
            {
                int topele=st1.top();
                st2.push(topele);
                st1.pop();
            }
        }
        int topele=st2.top();
        st2.pop();
        return topele;
    }

    bool isEmpty()
    {
        if(st1.empty() and st2.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    quene q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.pop()<<endl;
    q.pop();
    q.pop();
    cout<<q.isEmpty()<<endl;
    return 0;
}