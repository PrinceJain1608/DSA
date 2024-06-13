#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data=data;
    this->next=NULL;
  }
};
void insertAtHead(Node *&head,int d){
  Node *temp=new Node(d);
  temp->next=head;
  head=temp;
}
void insertAtTail(Node *&tail,int d){
  Node *temp=new Node(d);
  tail->next=temp;
  tail=temp;
}
void print(Node *&head){
  Node *temp=head;
  while(temp!=NULL){
    cout<<temp->data<< " ";
    temp=temp->next;

  }cout<<endl;
}
int main(){
  Node *node1=new Node(10);
  // cout<<node1->data<<endl;
  // cout<<node1->next<<endl;

 Node *head=node1;
 Node *tail=node1;
//  print(head);
//  insertAtHead(head,15);
//  print(head);
//  insertAtHead(head,17);
//  print(head);
print(head);
insertAtTail(tail,22);
print(head);
insertAtTail(tail,2);
print(head);
insertAtTail(tail,34);
print(head);

}