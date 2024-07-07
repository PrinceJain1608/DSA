vector <int> diagonal;
   if(root==NULL) return diagonal;
   
   queue <Node *> q;
   q.push(root);
   
   while(q.empty()!=true){
       Node *temp = q.front();
       q.pop();
       
       while(temp!=NULL){
           diagonal.push_back(temp->data);
           q.push(temp->left);
           
           temp = temp->right;
       }
   }
   return diagonal;