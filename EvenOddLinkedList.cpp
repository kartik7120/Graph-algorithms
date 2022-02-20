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

void insertAtTail(node *&head, int val)
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

void EvenOdd(node *&head)
{
    node *temp = head;
    node *odd = head;
    node *even = head->next;
    node *evenstart = even;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenstart;

    if (odd->next != NULL)
    {
        even->next=NULL;
    }
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    print(head);

    node *even = NULL;
    node *odd = NULL;
    EvenOdd(head);
    print(head);
    return 0;
}
//node *EvenOdd(node *&head, node *&even, node *&odd)
//{
//    node *temp = head;
//    node *ptr1 = even;
//    node *ptr2 = odd;
//
//    while (temp != NULL)
//    {
//        if ((temp->data) % 2 == 0)
//        {
//            if (ptr1 == NULL)
//            {
//                ptr1 = temp;
//            }
//            else
//                ptr1->next = temp;
//        }
//        else
//        {
//            if (ptr2 == NULL)
//            {
//                ptr2 = temp;
//            }
//            else
//                ptr2->next = temp;
//        }
//        temp = temp->next;
//    }
//    node *newhead = ptr1;
//    temp = newhead;
//    while (temp->next != NULL)
//    {
//        temp = temp->next;
//    }
//    temp->next = ptr2;
//    return newhead;
//}