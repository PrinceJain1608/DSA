#include<bits/stdc++.h>
Node* mergeKLists(vector<Node*> &listArray){
    vector<int>ans;
    for(int i=0; i<listArray.size(); i++){
        while(listArray[i]){
            ans.push_back(listArray[i]->data);
            listArray[i] = listArray[i]->next;
        }
    }
    sort(ans.begin(), ans.end());
    Node* head = new Node(ans[0]);
    Node* current = head;
    for(int i=1; i<ans.size(); i++){
        current->next = new Node(ans[i]);
        current = current->next;
    } 
    return head;
}