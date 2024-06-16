#include<iostream>
using namespace std;
class Node{
  public:
  int d;
  Node *prev;
  Node *next;

  //constructor
  Node(int data){
    this->d=data;
    this->prev=NULL;
    this->next=NULL;
  }
  ~Node(){
    if(this->next==NULL){
      delete next;
      next=NULL;
    }
  }
};
void insertAtHead(Node *&head,int d){
  Node *temp=new Node(d);
  temp->next=head;
  head->prev=temp;
  head=temp;
}
void insertAtTail(Node *&tail,int d){
  Node *temp=new Node(d);
  tail->next=temp;
  temp->prev=tail;
  tail=temp;
}
void insertAtPosition(Node *&tail,Node *&head,int position,int d){
  if(position==1){
    insertAtHead(head,d);
  }
  Node *temp=head;
  int cnt=1;
  while(cnt<position-1){
    temp=temp->next;
    cnt++;
  }
  if(temp->next==NULL){
    insertAtTail(tail,d);
  }
  Node *NodeToInsert=new Node(d);
  NodeToInsert->next=temp->next;
  temp->next->prev=NodeToInsert;
  temp->next=NodeToInsert;
  NodeToInsert->prev=temp;

}
void deletenode(Node *&head,int position){
  if(position==1){
    Node *temp=head;
    temp->next->prev=NULL;
    temp=temp->next;
    temp->next=NULL;
    delete temp;
  }
  else{
    Node *curr=head;
    Node *prev=NULL;

    int cnt=1;
    while(cnt<position){
      prev=curr;
      curr=curr->next;
      cnt++;
    }
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
  }
}
void print(Node *&head){
  Node *temp=head;
  while(temp!=NULL){
    cout<<temp->d<<" ";
    temp=temp->next;
  }cout<<endl;
}
int getLength(Node *head){
  int len=0;
  Node *temp=head;
  while(temp!=NULL){
    len++;
    temp=temp->next;
  }
  return len;
}
int main(){
  Node *node1=new Node(10);
  Node *head=node1;
  Node *tail=node1;
  insertAtHead(head,5);
  print(head);
  insertAtTail(tail,44);
  print(head);
  insertAtTail(tail,69);
  print(head);
  insertAtTail(tail,1);
  print(head);
  insertAtPosition(tail,head,3,100);
  print(head);
  deletenode(head,2);
  print(head);
  cout<<"length:"<<getLength(head)<<endl;
}