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

node* appendKNodes(node* &head,int pos)
{
    int position=1;
    node* temp=head;
    while(position < pos)
    {
        temp=temp->next;
        position++;
    }
    node* newhead=temp->next;
  ///  temp->next=NULL;
    node* endtail=temp;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    endtail->next=NULL;

    temp->next=head;

    return newhead;

}

void InsertAtTheTail(node* &head ,int val)
{
    node* n=new node(val);
    if(head == NULL)
    {
        head=n;
        return ;
    }

    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
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
    InsertAtTheTail(head,1);
    InsertAtTheTail(head,2);
    InsertAtTheTail(head,3);
    InsertAtTheTail(head,4);
    InsertAtTheTail(head,5);
    InsertAtTheTail(head,6);
    print(head);
  node* newhead=  appendKNodes(head,3);
    print(newhead);
    return 0;
}