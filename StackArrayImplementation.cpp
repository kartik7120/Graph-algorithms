#include<iostream>
using namespace std;

class stack
{
    int *arr;
    int top;
    public:

    stack(int n)
    {
        arr=new int[n];
        top=-1;
    }

    void push(int x)
    {
        top++;
        if(top==(n-1))
        cout<<"Overflow"<<endl;
        arr[top]=x;
    }

    bool isEmpty()
    {
        return top==-1;
    }

    int pop()
    {
        top--;
    }

    int top()
    {
        if(top==-1)
        {
            cout<<"Underflow"<<endl;
            return -1;
        }
        return arr[top];
    }
    
    
};



int main()
{
    int n;
    cin>>n;

    stack st(n);

    return 0;
}