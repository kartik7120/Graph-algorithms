#include <iostream>
using namespace std;

#define n 5

class quene
{
    
    int *arr;
    int front;
    int back;
    public:
    quene()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Quene Overload\n";
            return;
        }
        else
        {
            back++;
            arr[back] = x;
        }
        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in the Quene\n";
            return;
        }
        front++;
    }

    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"Quene is empty\n";
            return -1;
        }
        return arr[front];
    }

    bool isEmpty()
    {
        if (front == -1 || front > back)
            return true;
        return false;
    }
};

int main()
{
    quene q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.isEmpty()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.isEmpty()<<endl;
    
    return 0;
}