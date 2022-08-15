#include<bits/stdc++.h>
using namespace std; 
struct node
{
    int data; 
    struct node* next;
};
void insert_first(struct node* &head,int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value; 
    newnode->next=head; 
    head=newnode;
}
void inssert_mid(struct node* &head,int position,int value)
{
    struct node *temp,*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value; 
    temp=head;
    for(int i=2;i<position;i++)
    temp=temp->next;
    newnode->next=temp->next; 
    temp->next=newnode;
}
void insert_last(struct node* &head,int value) 
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value; 
    newnode->next=NULL;
    if(head==NULL) 
    {
        head=newnode; 
        return;
    }
    struct node* temp=head; 
    while(temp->next!=NULL) 
    temp=temp->next;
    temp->next=newnode;
}
void del_first(struct node* &head) 
{
    struct node* temp=head; 
    head=head->next; 
    delete temp;
} 
void del_mid(struct node* &head,int position) 
{
    struct node *newnode,*temp=head;
    for(int i=2;i<position;i++) 
    temp=temp->next;
    newnode=temp; 
    temp->next=temp->next->next;
    delete newnode;

}
void del_last(struct node* &head) 
{
    struct node *temp,*pre;
    if(head==NULL)
    {
        del_first(head); 
        return;
    }
    temp=head; 
    while(temp->next!=NULL) 
    {
        pre=temp;
        temp=temp->next;
    } 
    pre->next=NULL; 
    delete temp;
}
bool search(struct node* &head,int key) 
{
    struct node* temp=head; 
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        } 
        temp=temp->next;
    }
    return false;
}
int len(struct node* &head) 
{
    int cnt=0;
    struct node* temp=head; 
    while(temp!=NULL) 
    { 
        cnt++;
        temp=temp->next;
    }
    return cnt; 
}
void sorting(struct node* &head)
{
    struct node *cur,*temp;
    cur=head;
    if(head==NULL)
    return;
    while(cur!=NULL)
    {
        temp=cur->next;
        while(temp!=NULL) 
        {
            if(cur->data > temp->data) 
            swap(cur->data,temp->data);
            temp=temp->next;
        }
        cur=cur->next;
    }
}
void rev(struct node* &head) 
{
    struct node* temp=head;
    struct node *pre,*cur,*nxt; 
    pre=NULL; 
    cur=nxt=head; 
    while(nxt!=NULL)
    {
        nxt=nxt->next;
        cur->next=pre;
        pre=cur; 
        cur=nxt;
    }
    head=pre;
}
void display(struct node* &head) 
{
    struct node* temp=head; 
    while(temp!=NULL) 
    {
        cout<<temp->data<<' '; 
        temp=temp->next;
    } 
    cout<<'\n';
}
int main() 
{
    struct node *head=NULL; 
    insert_last(head,66);
    insert_first(head,3); 
    insert_last(head,4); 
    insert_last(head,9); 
    insert_first(head,45); 
	cout<<"List elements: ";
    display(head); 
    inssert_mid(head,3,44);
	cout<<"\nList elements after insert an element at middle: ";
    display(head);
	del_first(head);
	cout<<"\nList elements after delete first element: ";
	display(head);
    rev(head); 
	cout<<"\nList element after reverse: ";
    display(head);
	sorting(head); 
	cout<<"\nList elements after sorting: ";
    display(head);
	//call any function to specific operation and display
}

// there maybe extra topics here, you can skip
