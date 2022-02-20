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

node *reverseKnodes(node *&head, int k)
{
    node *previous = NULL;
    node *current = head;
    node *nextptr;

    if()

    int count = 0;

    while (current != NULL && count < k)
    {
        nextptr = current->next;

        current->next = previous;
        current = previous;
        nextptr = current;
        count++;
    }

    if(nextptr!=NULL)
    head->next = reverseKnodes(nextptr,k);

    return previous;
}


void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
    return ;
}

int main()
{
    node* head=NULL;

    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    print(head);
    int k;
    cin>>k;

    reverseKnodes(head,k);

    print(head);

    return 0;
}