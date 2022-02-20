#include <iostream>
using namespace std;
// A linked list consists of series of structures called nodes

//These nodes consists of two feilds i.e. first feild stores the data and the second feild stores a pointer which pointes to the
// address of the next node

// When a pointer is pointing to NULL that means that our linked list has ended

//A node is user defined data structure and we are making it in a class

class node
{
public:
    int data;     // data feild of the node
    node *next;   //pointer pointing to the next node in the linked list
    node(int val) // initializing our linked list
    {
        data = val;
        next = NULL;
    }
};

//We will be inserting an element at the end of the linked list

void AddAtTheEnd(node *&head, int val)
{
    node *n = new node(val); // It is a node which will have val in it's data feild and in the next feild it will be pointing to null

    if (head == NULL) // condition that there is no node in the linked list
    {
        head = n;
        return;
    }

    // Since we need to traverse the list we need a iterator that will interate the linked list till the end

    node *temp = head; // iterator pointing at the start of the linked list

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n; // inserted element at the end of the list
}

void AddAtTheStart(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
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
    AddAtTheEnd(head, 1);
    AddAtTheEnd(head, 2);
    AddAtTheEnd(head, 3);
    display(head);
    AddAtTheEnd(head,4);
    display(head);
    return 0;
}