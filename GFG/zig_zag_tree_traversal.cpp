class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>ans;
        stack<Node*>s1;
        stack<Node*>s2;
        if(root==NULL)
        return ans;
        s1.push(root);
        while(!s1.empty() || !s2.empty()){
            while(!s1.empty()){
               Node* temp = s1.top();
               s1.pop();
               ans.push_back(temp->data);
               if(temp->left){
                   s2.push(temp->left);
               }
               if(temp->right){
                   s2.push(temp->right);
               }
            }
            while(!s2.empty()){
                Node* temp1 = s2.top();
                s2.pop();
                ans.push_back(temp1->data);
                if(temp1->right){
                    s1.push(temp1->right);
                }
                if(temp1->left){
                    s1.push(temp1->left);
                }
            }
        }
        return ans;
    }
};