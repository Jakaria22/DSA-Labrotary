#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data; 
    struct node *left,*right;
};
struct node* create(int value) 
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct node* insert(struct node* root,int value)
{
    if(root==NULL)
    return create(value);
    if(value<root->data) 
    root->left=insert(root->left,value);
    if(value>root->data)
    root->right=insert(root->right,value);
    return root;
}
void inorder(struct node* root)
{
    if(root==NULL)
    return; 
    inorder(root->left); 
    cout<<root->data<<' '; 
    inorder(root->right);
}
bool search(struct node* root,int value) 
{
    if(root==NULL) 
    return false; 
    if(root->data==value) 
    return true; 
    if(value< root->data) 
    return search(root->left,value); 
    if(value>root->data) 
    return search(root->right,value);
    return false;
}
int main() 
{
    struct node* root=NULL;
    int n,i,x;
    cout<<"Enter number of elements: "; 
    cin>>n;
    int a[n];
    cout<<"Enter root element: "; 
    cin>>x;
    root=insert(root,x);
    cout<<"Enter other elements: "; 
    for(i=0;i<n-1;i++) 
    cin>>a[i];
    for(i=0;i<n-1;i++)
    insert(root, a[i]);
    cout<<"Enter searched element: "; 
    cin>>x;
    cout<<"Inorder print: ";
    inorder(root);
    if(search(root,x))
    cout<<"\nValue found"; 
    else cout<<"\nNot found";
  
}
