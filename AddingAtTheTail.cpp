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

void Insert(node* &head,int val)
{
    node* n=new node(val);

    if(head==NULL)
    {
        head=n;
        return ;
    }

    node* temp=head;
    while(temp->next!=NULL)
    {
       temp = temp->next;
    }
    temp->next=n;
}

void InsertHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";

       temp= temp->next;
    }
}

bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        return true;
        temp=temp->next;
    }
    return false;
}

int main()
{
    node* head=NULL;
    Insert(head,1);
    Insert(head,2);
    Insert(head,3);
    print(head);
    InsertHead(head,5);
    print(head);
    cout<<endl;
    cout<<search(head,2);
    return 0;
}