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

node *mergesort(node *&head1, node *&head2)
{
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *dummynode = new node(-1);
    node *ptr3 = dummynode;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            if (ptr2->data < ptr1->data)
            {
                ptr3->next = ptr2;
                ptr2 = ptr2->next;
            }
        }
        ptr3 = ptr3->next;
    }
    ptr3->next = NULL;

    return dummynode->next;
}

node *MergeSortRecursive(node *&head1, node *&head2)
{
    node *result;
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    if (head1->data < head2->data)
    {
        result = head1;
        result->next=MergeSortRecursive(head1->next,head2);
    }
    else
    {
        result=head2;
        result->next=MergeSortRecursive(head1,head2->next);
    }

    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insert(head1, 1);
    insert(head1, 4);
    insert(head1, 5);
    insert(head1, 7);
    print(head1);

    insert(head2, 2);
    insert(head2, 3);
    insert(head2, 6);
    print(head2);

    node *newhead = MergeSortRecursive(head1, head2);
    print(newhead);
    return 0;
}