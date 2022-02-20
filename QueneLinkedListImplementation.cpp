#include <iostream>
using namespace std;

class node
{
public:
    node* next;
    int data;
    node(int val)
    {
        data = val;
        next=NULL;
    }
};
k
class quene
{
    node* front;
    node* back;
    public:

    quene()
    {
        front=NULL;
        back=NULL;
    }
    void push(int val)
    {
        node *n = new node(val);
        if (front==NULL)
        {
            front=n;
            back=front;
            return;
        }
        back->next=n;
        back=n;
    }

    void pop()
    {
        if(front==NULL)
        {
            cout<<"No elements to pop\n";
            return;
        }
        node*todelete=front;
        front=front->next;
        delete todelete;
    }

    bool isEmpty()
    {
        if(front==NULL)
        {
            return true;
        }
        return false;
    }

    int peek()
    {
        if(front==NULL)
        {
            return -1;
        }
        return front->data;
    }
};

int main()
{
    quene q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.peek()<<endl;
    cout<<q.isEmpty()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<q.peek()<<endl;
    return 0;
}