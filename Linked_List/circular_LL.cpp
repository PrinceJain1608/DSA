#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;

  //constructor
  Node(int d){
    this->data=d;
    this->next=NULL;
  }

  ~Node(){
    if(this->next==NULL){
      delete next;
      next=NULL;
    }
  }
};

void insertNode(Node *&tail,int element,int d){
  //empty LL
  if(tail==NULL){
    Node *newNode=new Node(d);
    tail=newNode;
    newNode->next=newNode;
  }
  else{
    //non-empty LL
    Node *curr=tail;
    while(curr->data!=element){
      curr=curr->next;
    }
    //element found
    Node *temp=new Node(d);
    temp->next=curr->next;
    curr->next=temp;
  }
}
void print(Node *&tail){
  Node *temp=tail;
  if(tail==NULL){
    cout<<"List is empty "<<endl;
    return;
  }
  do{
    cout<<tail->data<<" ";
    tail=tail->next;
  }while(tail!=temp);
  cout<<endl;
}

void deleteNode(Node *&tail,int value){
  //IF LL EMPTY
  if(tail==NULL){
    cout<<"List is alreayd empty "<<endl;
  }
 
  else{
    //IF LL IS NON-EMPTY
    Node *prev=tail;
    Node *curr=prev->next;

    while(curr->data!=value){
      prev=curr;
      curr=curr->next;
    }
    prev->next=curr->next;

    //single node LL
    if(curr==prev){
    tail=NULL;
  }
  //>=2 nodes LL
    else if(tail==curr){
      tail=prev;
    }
    curr->next=NULL;
    delete curr;
  }
}

int main(){
  Node *tail=NULL;
  insertNode(tail,3,5);
  print(tail);
  insertNode(tail,5,7);
  print(tail);
  insertNode(tail,5,3);
  print(tail);
  insertNode(tail,7,3);
  print(tail);
  deleteNode(tail,5);
  print(tail);
  deleteNode(tail,3);
  print(tail);
  deleteNode(tail,3);
  print(tail);
  deleteNode(tail,7);
  print(tail);
}