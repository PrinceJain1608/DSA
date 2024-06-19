
//Apporach 1  iterative
Node* reverseLinkedList(Node *head)
{
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *prev=NULL;
    Node *curr=head;
    Node *forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

//Apprach 2  recursive

void reverse(Node *&head,Node *curr,Node *prev){
    if(curr==NULL){
        head=prev;
        return;
    }
    Node *forward=curr->next;
    reverse(head,forward,curr);
    curr->next=prev;
}
Node* reverseLinkedList(Node *head)
{
   Node *prev=NULL;
    Node *curr=head;
    reverse(head,curr,prev);
    return head;
}

//Approach 3
Node *reverse1(Node *&head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *chotaHead=reverse1(head->next);
    head->next->next=head;
    head->next=NULL;
    return chotaHead;
}
Node* reverseLinkedList(Node *head)
{
  
    return reverse1(head);
}
