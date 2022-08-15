#include<bits/stdc++.h>
using namespace std; 
class node
{
    public:
  char data; 
  node *left,*right;
  node(char value) 
  {
    data=value;
    left=right=NULL;
  }
};
node* create(char value)
{
  struct node* newnode=new node(value);
  return newnode;
} 
void inorder(node* root)
{
  if(root==NULL) 
  return; 
  inorder(root->left); 
  cout<<root->data<<' ';
  inorder(root->right);  

}
void preorder(node* root) 
{
  if(root==NULL)
  return; 
  cout<<root->data<<' '; 
  preorder(root->left); 
  preorder(root->right); 
} 
void postorder(node* root) 
{
  if(root==NULL) 
  return; 
  postorder(root->left);
  postorder(root->right); 
  cout<<root->data<<' '; 
  
}
bool fullBinary(node* root) 
{
  if(root==NULL)
  return true; 
  if(root->left==NULL && root->right==NULL) 
  return true;
  if(root->left && root->right)
  return (fullBinary(root->left)&&fullBinary(root->right));
  return false;
}
int depth(node* root) 
{
  int d=0; 
  while(root!=NULL) 
  {
    d++; 
    root=root->left;
  } 
  return d;
}
bool perfectBinary(node* root,int d,int level) 
{
  if(root==NULL) 
  return true; 
  if(root->left==NULL && root->right==NULL) 
  return (d==level+1); 
  if(root->left!=NULL || root->right!=NULL) 
  return false; 
  return (perfectBinary(root->left,d,level+1)&&perfectBinary(root->right,d,level));
}
bool Perfect(node* root) 
{
  int d=depth(root); 
  return (perfectBinary(root,d,0)); 
}
int cntNodes(node* root)
{
  if(root==NULL)
  return (0); 
  return (1+cntNodes(root->left)+cntNodes(root->right));
} 
bool completeBinary(node* root,int index,int nodenumber)
{
  if(root==NULL) return true; 
  if(index>nodenumber) return false;
  return ((completeBinary(root->left,2*index+1,nodenumber) && completeBinary(root->right,2*index+2,nodenumber)));
}
int main() 
{
  node* root=NULL; 
  root=create('F');
  root->left=create('A');
  root->right=create('D');
  root->left->left=create('E');
  root->left->right=create('K');
  root->left->right->left=create('C');
  root->right->left=create('H');
  root->right->right=create('G');
  root->right->right->left=create('B'); 
  cout<< "In-order: ";
  inorder(root); 
  cout<<"\nPre-order: "; 
  preorder(root); 
  cout<<"\nPost-order: "; 
  postorder(root); 
  if(fullBinary(root)) 
  cout<<"\nThis a full a binaray tree"; 
  else cout<<"\nThis is not a full binary tree";
  if(Perfect(root)) 
  cout<<"\nThis a perfect a binaray tree"; 
  else cout<<"\nThis is not a perfect binary tree";
  int node=cntNodes(root); 
  if(completeBinary(root,0,node))
  cout<<"\nThis is a complete binary tree"; 
  else cout<<"\nThis is not a complete binary tree";
}
