#include <iostream>
using namespace std;

//A linked is a cyclic linked list or not is that when the next pointer of the two nodes is pointing to the same nodes

//To check whether a linked list is a cyclic we use a floyed algorithm or Hare and Tortoise algorithm
//The Hare or Rabbit will act as fast pointer which will be moving two steps at a time while the Tortoise pointer will act as slow
//pointer which will be moving at one place at a time.

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

void insertAtTheTail(node *&head, int val)
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

void formCycle(node *&head, int pos) // making the cycle in the linked list
{
    node *temp = head;
    node *startNode;

    int position = 1;

    while (temp->next != NULL)
    {
        if (position == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        position++;
    }
    temp->next = startNode;
}

void removeCycle(node *&head) // breaking the cycle in the linked list
{
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (fast != slow);

    fast = head;
    while (fast->next != slow->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
}

bool detectCycle(node *&head) // check if there is a cycle in the linked list
{
    node *fast = head; // Hare or Rabbit pointer
    node *slow = head; // Tortoise pointer

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    insertAtTheTail(head, 1);
    insertAtTheTail(head, 2);
    insertAtTheTail(head, 3);
    insertAtTheTail(head, 4);
    insertAtTheTail(head, 5);
    insertAtTheTail(head, 6);
    print(head);
    formCycle(head, 3);
    cout << detectCycle(head) << endl;
    removeCycle(head);
    cout << detectCycle(head) << endl;
    print(head);

    return 0;
}