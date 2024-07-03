#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node *left;
    Node *right;
//constructor
Node(int d){
  this->data=d;
  this->left=NULL;
  this->right=NULL;
}
};

Node *buildTree(Node *root){
  int data;
  cout<<"Enter the data:";
  cin>>data;
  root=new Node(data);
  if(data==-1){
    return NULL;
  }
  cout<<"Enter data which has to be insert in the left of "<<data<<endl;
  root->left=buildTree(root->left);
  cout<<"Enter data which has to be insert in the right of "<<data<<endl;
  root->right=buildTree(root->right);
  return root;

}
int main(){
  Node *root=NULL;
  root=buildTree(root);
}