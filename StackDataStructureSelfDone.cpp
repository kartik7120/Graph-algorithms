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
        if (top == -1)
        {
            *arr = x;
            top++;
        }
        *(arr + top) = x;
        top++;
    }

    bool empty()
    {
        return (top==-1);
    }

    void pop()
    {
        top--;
    }

    void print()
    {
        int i=0;
        do
        {
            cout<<*(arr+i)<<" ";
            i++;
        } while (i<=top);
    }

};

int main()
{
    
    return 0;
}