#include <iostream>
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
};

void reverseK(node *&head, int k)
{
    node *previous = NULL;
    node *current = head;
    node *nextptr;

    int count = 0;
    while (current != NULL && count <= k)
    {
        nextptr = current->next;
        current->next = previous;

        previous=current;
        nextptr=current;
        count++;
        if(count==2)
        {
            
        }
    }


}

void insert(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    print(head);
    return 0;
}