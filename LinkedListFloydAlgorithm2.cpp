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

void formCycle(node *&head, int pos)
{
    node *temp = head;

    node *startCycle;

    int position = 1;

    while (temp->next != NULL)
    {
        if (position == pos)
        {
            startCycle = temp;
        }
        temp = temp->next;
        position++;
    }
    temp->next = startCycle;
}

void breakCycle(node *&head)
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

bool detectCycle(node *&head)
{
    node *fast = head;
    node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
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

    formCycle(head,1);
    print(head);
   cout<<detectCycle(head)<<endl;
    breakCycle(head);
    cout<<detectCycle(head)<<endl;
    print(head);

    return 0;
}