#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}



void insert(node* &head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return ;
    }
    node* n=new node(val);

    node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=n;
    n->prev=temp;

}
void insertAtMiddle(node* &head,int val,int pos)
{
    if(pos==1)
    {
        insertAtHead(head,val);
        return ;
    }
    int postion=1;
    node* n=new node(val);
    node* temp=head;

    while(postion<pos)
    {
        temp=temp->next;
        postion++;
    }

    if(temp->next->next==NULL)
    {
        insert(head,val);
        return ;
    }
    else
    {
        temp->next->prev=n;
        n->next=temp->next;
        temp->next=n;
        n->prev=temp;
    }
}
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    print(head);
    insertAtHead(head,5);
    print(head);
    insertAtMiddle(head,6,2);
    print(head);
    insertAtMiddle(head,7,1);
    print(head);
    
    return 0;
}