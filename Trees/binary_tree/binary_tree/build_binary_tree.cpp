#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
void inOrder(node *root){
  if(root==NULL){
    return;
  }
  inOrder(root->left);
  cout<<root->data<<" ";
  inOrder(root->right);
}

void preOrder(node *root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preOrder(root->left);
  preOrder(root->right);
}

void postOrder(node *root){
  if(root==NULL){
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->data<<" ";

}
int main(){
  node *root=NULL;
  root=buildTree(root);
  cout << "Printing the level order traversal output " << endl;
  levelOrderTraversal(root);
  cout<<"InOrder traversal:"<<endl;
  inOrder(root);
  cout<<endl;
  cout<<"PreOrder traversal:"<<endl;
  preOrder(root);
  cout<<endl;
  cout<<"PostOrder traversal:"<<endl;
  postOrder(root);
  cout<<endl;
}