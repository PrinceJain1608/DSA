#include<iostream>
#include<queue>
using namespace std;
class Node{
  public:
  int data;
  Node *left;
  Node *right;

  Node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
  }
};
  Node *insertInBST(Node *root,int d){
    if(root==NULL){
       root=new Node(d);
      return root;
    }
    if(d<root->data){
      root->left=insertInBST(root->left,d);
    }
    else{
      root->right=insertInBST(root->right,d);
    }
    return root;
  }
  void takeInput(Node *&root){
    int data;
    cin>>data;
    while(data!=-1){
      root=insertInBST(root,data);
      cin>>data;
    }
  } 
  void inOrder(Node *root){
    if(root==NULL){
      return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
  }
Node *minVal(Node *root){
  Node *temp=root;
  while(temp->left!=NULL){
    temp=temp->left;
  }
  cout<<temp->data;
}
Node *maxVal(Node *root){
  Node *temp=root;
  while(temp->right!=NULL){
    temp=temp->right;
  }
  cout<<temp->data;
}
Node *deleteFromBST(Node *root,int val){
  //blank tree
  if(root==NULL){
    return root;
  }
  if(root->data==val){
    //0 child
    if(root->left==NULL && root->right==NULL){
      delete root;
      return NULL;
    }
    //one child
    //left child
        if(root->left!=NULL && root->right==NULL){
          Node *temp=root->left;
          delete root;
          return temp;
        }
    //right child
        if(root->left==NULL && root->right!=NULL){
          Node *temp=root->right;
          delete root;
          return temp;
        }
    //two child
        if(root->left!=NULL && root->right!=NULL){
          int mini=minVal(root->right)->data;
          root->data=mini;
          root->right=deleteFromBST(root->right,mini);
          return root;
        }
  }
  else if(root->data>val){
   root->left=deleteFromBST(root->left,val);
   return root;
  }
  else{
    root->right=deleteFromBST(root->right,val);
    return root;
  }
  

}
int main(){
  Node *root=NULL;
  cout<<"Enter the data to crate BST:";
  takeInput(root);
  cout<<"Printing BST:"<<endl;
  inOrder(root);
  cout<<endl;
  cout<<"Min value in BST:";
  minVal(root);
  cout<<endl;
  cout<<"Max value in BST:";
  maxVal(root);
  root=deleteFromBST(root,4);
  cout<<endl;
  cout<<"Printing BST:"<<endl;
  inOrder(root);
  return 0;
}