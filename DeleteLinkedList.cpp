#include <iostream>
using namespace std;

//In order to delete an node in the list then we need to unlink the node that we are trying to delete and link the
//the (n-1) to the n+1 node in the list

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

void ToDeleteHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}

void ToDelete(node *&head, int val) // head is pointing at the start of the list and val is the value that we need to delete
{
    if (head == NULL) // cornor case where we cannot delete since there is no node in out linked list so in this case we can't do
    //anything so we will simply return back
    {
        return;
    }

    if (head->next == NULL) // This is when we have only one node in out linked list and we can't access the next node in the list
    {
        ToDeleteHead(head);
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete; // we deleted the node in the linked list
    //If we do not delete then it will cause a memory leak
}

void display(node *head) // display function to print the elements of a linked list
{
    // here we are taking head as call by value not call by reference because we want to print the list and not modify it

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertAtTheTail(head, 1);
    insertAtTheTail(head, 2);
    insertAtTheTail(head, 3);
    display(head);
    // ToDelete(head,2);
    // display(head);
    ToDeleteHead(head);
    display(head);
    return 0;
}