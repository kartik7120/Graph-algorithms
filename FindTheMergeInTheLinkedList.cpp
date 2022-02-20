#include <iostream>
#include <cmath>
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
    }k
};

void InsertAtTheTail(node *&head, int val)
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

void mergeList(node *&head1, node *&head2, int pos)
{
    int position = 1;
    node* temp1 = head1;
    node* temp2=  head2;

    while (position <= pos)
    {
        temp1 = temp1->next;
        position++;
    }

    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int lengthLinkedList(node *&head)
{
    int length = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

int MergePoint(node *&head1, node *&head2)
{
    node *temp1;
    node *temp2;

    int length1 = lengthLinkedList(head1);
    int length2 = lengthLinkedList(head2);
    int position = 0;
    if (length1 > length2)
    {
        position = length1 - length2;
        temp1 = head1;
        temp2 = head2;
    }
    else if (length2 > length1)
    {
        position = length2 - length1;
        temp1 = head2;
        temp2 = head1;
    }

    while (position > 0)
    {
        position--;
        temp1 = temp1->next;
    }

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1 == temp2)
         return temp1->data;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return -1;
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
    node *list1 = NULL;
    node *list2 = NULL;
    InsertAtTheTail(list1, 1);
    InsertAtTheTail(list1, 2);
    InsertAtTheTail(list1, 3);
    InsertAtTheTail(list1, 4);
    InsertAtTheTail(list1, 5);
    InsertAtTheTail(list1, 6);

    InsertAtTheTail(list2, 9);
    InsertAtTheTail(list2, 10);

    mergeList(list1, list2, 3);
    
    print(list1);
    print(list2);

    cout << MergePoint(list1, list2) << endl;

    return 0;
}