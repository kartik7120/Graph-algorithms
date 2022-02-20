#include <iostream>
#include<climits>
#include<limits>
using namespace std;

class node
{
    public:
    int data;
    node *next;


    node(int val)
    {
        data = val;
        next = NULL;
    }
    node(){};
};

class stack
{
    node* top;

    public:
    stack()
    {
        top=NULL;
    }

    void push(int x)
    {
        node* n=new node(x);

        if(top==NULL)
        {
            top=n;
            return ;
        }

        top->next=n;
    }

    bool isEmpty()
    {
        return top==NULL;
    }

    int pop()
    {
        if(top==NULL)
        {
            cout<<"No element left to pop"<<endl;
            return INT_MIN;
        }
        node* temp=NULL;
        while(temp->next!=top)
        {
            temp=temp->next;
        }
        node* todelete=top;
        top=temp;
        return top->data;
        delete todelete;
    }

    int topValue()
    {
        return top->data;
    }

    void print()
    {
        node* temp=NULL;
        while(temp!=top)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<'\n';
    }
};

int main()
{
    stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.topValue()<<endl;
    st.pop();
    st.pop();
    cout<<st.isEmpty()<<endl;
    cout<<st.topValue()<<endl;
    st.pop();
    st.pop();
    return 0;
}