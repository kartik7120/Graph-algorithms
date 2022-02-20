#include <iostream>
#include <stack>
using namespace std;

class quene
{
    stack<int> st;

public:
    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        if (st.empty())
        {
            cout << "Quene is empty\n";
            return -1;
        }
        int x = st.top();
        st.pop();
        if (st.empty())
        {
            return x;
        }
        int res = pop();
        st.push(x);
        return res;
    }

    bool isEmpty()
    {
        if (st.empty())
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
    cout << q.pop() << endl;
    q.pop();
    q.pop();
    cout << q.isEmpty() << endl;

    return 0;
}