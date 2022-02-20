#include <iostream>
using namespace std;

#define n 10 // defining a permanenet value of n as 10 using #define operator

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == (n - 1))
        {
            cout << "Overflow" << endl; // no more elements can be added
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
            cout << "No element to pop" << endl;
        else
            top--;
    }

    int ValueAtTop() // Gives the value that the top is pointing to
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        return (top == -1); //if true then it means that stack is empty otherwise stack is not empty
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.isEmpty()<<endl;
    st.pop();
    cout<<st.ValueAtTop()<<endl;
    st.pop();
    st.pop();
    st.pop(); // should return that no element is present to pop since we have already all the elements

    cout<<st.isEmpty()<<endl;
    return 0;
}