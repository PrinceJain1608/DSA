Node *removeDuplicates(Node *head)
{
      Node* curr = head;
    Node* prev = NULL;
    unordered_map<int, bool> visited;
    
    while(curr != NULL){
        if(!visited[curr->data]){
            visited[curr->data] = true;
            prev = curr;
            curr = curr -> next;
        }
        else{
            prev -> next = curr -> next;
            delete curr;
        }
        curr = prev -> next;
    }
    return head;
}