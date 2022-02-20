#include <iostream>
using namespace std;

// A doubly linked list has three values in a single node i.e a previous pointer , a data feild, and the next pointer

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val) // for inserting node at the start of the  doubly linked list
{
    node *n = new node(val);

    n->next = head;
    if (head != NULL)
        head->prev = n;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(node *&head)
{
    node *todelete = head;

    head=head->next;
    head->prev=NULL;

    delete todelete;
}

void deletion(node *&head, int pos) // In the doubly linked list we can reach the node directly as we can access both the nodes i.e. the next and the previous node in the linked list
{                                   // pos means the position that we are trying to delete

    if (pos == 1) //trying to access the first node of the doubley linked list
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;

    int position = 1;
    while (position != pos)
    {
        temp = temp->next;
        position++;
    }

    node *todelete = temp;

    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
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

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    print(head);
    insertAtHead(head, 4);
    print(head);
    deletion(head,3);
    print(head);
    return 0;
}