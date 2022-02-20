#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);

    if(head==NULL)
    {
        n->next=n;
        head=n;
        return ;
    }

    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val)
{
    node* n=new node(val);

    if(head==NULL)
    {
        insertAtHead(head,val);
        return ;
    }

    node* temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

//void deletion(node* &head,int pos)
//{
//    node*  temp=head;
//    int position=1;
//
//    while(position<pos)
//    {
//        temp=temp->next;
//        position++;
//    }
//
//    node* todelete = temp->next;
//    temp->next=head;
//    delete todelete;
//}
//
void deleteAtHead(node* &head)
{
    node* temp=head;
    node* todelete=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }

    temp->next=head->next;
    head=head->next;
    delete  todelete;
}

void deletion(node* &head,int pos)
{
    if(pos==1)
    {
        deleteAtHead(head);
        return ;
    }
    int position=1;
    node* temp=head;

    while(position<pos)
    {
        temp=temp->next;
        position++;
    }

    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

void print(node* head)
{
    node* temp=head;
    //We are using do-while loop here because for the condition temp->next!=head we will not be able to print 
    //the last node of the Linked List thus we are using the do-while loop
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    
    cout<<endl;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,5);
    print(head);
    deletion(head,4);
    print(head);
    deletion(head,2);
    print(head);
    deletion(head,1);
    print(head);
    return 0;
}