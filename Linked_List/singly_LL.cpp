#include<iostream>
#include<map>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  //constructor
  Node(int data){
    this->data=data;
    this->next=NULL;
  }
  //destructor
  //memory free
  ~Node(){
    int value=this->data;
    if(this->next!=NULL){
      delete next;
      this->next=NULL;
    }
    
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
void insertAtPosition(Node *&tail,Node *&head,int position,int d){

  //insert at start
  if(position==1){
    insertAtHead(head,d);
    return;
  }
  Node *temp=head;
  int cnt=1;
  while(cnt<position-1){
    temp=temp->next;
    cnt++;
  }
  //insert at end
  if(temp->next==NULL){
    insertAtTail(tail,d);
    return;
  }
  Node *nodeToInsert=new Node(d);
  nodeToInsert->next=temp->next;
  temp->next=nodeToInsert;
}

void deleteNode(Node *&head,int position){

  //start element
  if(position==1){
    Node *temp=head;
    temp->next=NULL;
    delete temp;

  }
  //middle and last element
  else{
    Node *curr=head;
    Node *prev=NULL;
    int cnt=1;
    while(cnt<position){
      prev=curr;
      curr=curr->next;
      cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

  }
}

bool detectLoop(Node *&head){
  if(head==NULL){
    return false;
  }
  map<Node*,bool> visited;
  Node *temp=head;
  while(temp!=NULL){
  if(visited[temp]==true){
    return true;
  }
  visited[temp]=true;
  temp=temp->next;
  }
  return false;
  
}

Node *floydcycle(Node *&head){
  if(head==NULL){
    return NULL;
  }
  Node *fast=head;
  Node *slow=head;

  while(slow!=NULL && fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
      fast=fast->next;
    }
    slow=slow->next;
  
  if(slow==fast){
    return slow;
    }
  }
  return NULL;
}

Node *startingNode(Node *head){
  if(head==NULL){
    return head;
  }
  Node *intersection=floydcycle(head);
  Node *slow=head;

  if(slow!=intersection){
    slow=slow->next;
    intersection=intersection->next;
  }
  return slow;
}

Node *removeLoop(Node *head){
  if(head==NULL){
    return NULL;
  }
  Node *startingOfLoop=startingNode(head);
  Node *temp=startingOfLoop;
  while(temp->next!=startingOfLoop){
    temp=temp->next;
  }
  temp->next=NULL;
  return head;
}
bool isCircular(Node *head){
    if(head==NULL){
      return true;
    }
    Node *temp=head->next;
    while(temp!=NULL && temp!=head){
      temp=temp->next;
    }
    if(head==temp){
      return true;
    }
    return false;
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
//print(head);
insertAtTail(tail,22);
//print(head);
insertAtTail(tail,2);
//print(head);
insertAtTail(tail,34);
//print(head);
insertAtPosition(tail,head,3,99);
//print(head);
tail->next=head->next;    //cycle is present
insertAtPosition(tail,head,1,69);
//print(head);
insertAtPosition(tail,head,7,0);
//print(head);
deleteNode(head,3);
//print(head);
// if(detectLoop(head)){
//   cout<<"cycle is present";
// }
// else{
//   cout<<"cycle is not present";
// }
if(floydcycle(head)!=NULL){
  cout<<"cycle is present"<<endl;
}
else{
  cout<<"cycle is not present"<<endl;
}
Node *loop=startingNode(head);
cout<<"loops starts at:"<<loop->data<<endl;
removeLoop(head);
print(head);
}