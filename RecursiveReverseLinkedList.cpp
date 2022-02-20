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

void insert(node* &head, int val)
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
// We will be using three pointers to reverse the linked list
//Previous pointer will be pointing to NULL since the last node of the linked list will to
//Current pointer will be pointing at the start of the linked list
//Next pointer will be pointing to the node after the current node
node* reverse(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    
    node* newhead=reverse(head->next);
    head->next->next=head;
    head=head->next;
    return newhead;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    print(head);
    node *newhead = reverse(head);
    print(newhead);
    return 0;
}
  /* // node *temp = head;
    node *previous = NULL;
    node *current = head;
    node *nextNode;

    while (current != NULL)
    {
        nextNode = current->next;
        current->next = previous;

        previous = current;
        current = nextNode;
        // nextNode=nextNode->next;
    }

    return previous;
    */