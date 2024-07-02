//APPROACH 1
void insertAtTail(Node *&head,Node *&tail,int d){
	Node *newNode =new Node(d);
	if(head==NULL){
		head=newNode;
		tail=newNode;
	}
	else{
		tail->next=newNode;
		tail=newNode;
	}
}

Node *cloneLL(Node *head){
	//create a clone LL
	Node *cloneHead=NULL;
	Node *cloneTail=NULL;
	Node *temp=head;
	while(temp!=NULL){
		insertAtTail(cloneHead,cloneTail,temp->data);
		temp=temp->next;
	}
	//cloneNodes add in the original list
	Node *originalNode=head;
	Node *cloneNode=cloneHead;
	while(originalNode!=NULL && cloneNode!=NULL){
		Node *next=originalNode->next;
		originalNode->next=cloneNode;
		originalNode=next;

		next=cloneNode->next;
		cloneNode->next=originalNode;
		cloneNode=next;
	}
	//random pointer copy
	temp=head;
	while(temp!=NULL){
		if(temp->next!=NULL){
			temp->next->random=temp->random ? temp->random->next:temp->random;
		}
		temp=temp->next->next;
	}
	//revert changes done in step 2
	originalNode=head;
	cloneNode=cloneHead;
	while(originalNode!=NULL && cloneNode!=NULL){
		originalNode->next=cloneNode->next;
		originalNode=originalNode->next;
		if(originalNode!=NULL){
			cloneNode->next=originalNode->next;
		}
		cloneNode=cloneNode->next;
	}
	// return ans
	return cloneHead;
}

//APPROACH 2 USING MAP

#include<bits/stdc++.h>
Node *cloneLL(Node *head){
if(head == NULL) return head;
// Write your code here
Node* newLL = NULL;
Node* temp = head;
unordered_map<Node*,Node*> mp;
while(head) {
newLL = new Node(head->data);
mp[head] = newLL;
head = head->next;
}
head = temp;
while(head) {
mp[head]->next = mp[head->next];
mp[head]->random = mp[head->random];
head = head->next;
}
return mp[temp];
}