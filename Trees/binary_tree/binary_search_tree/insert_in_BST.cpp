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
int main(){
  Node *root=NULL;
  cout<<"Enter the data to crate BST:";
  takeInput(root);
  cout<<"Printing BST:"<<endl;
  inOrder(root);
  return 0;
}