class Solution {
public:
    void leftTree(Node *root,vector<int> &ans){
        if((root==NULL)|| (root->left==NULL && root->right==NULL)){
            return;
        }
        
        ans.push_back(root->data);
        if(root->left){
            leftTree(root->left,ans);
        }
        else{
            leftTree(root->right,ans);
        }
    }
    
    void leafNodes(Node *root,vector<int> &ans){
        if(root==NULL){
            return;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    leafNodes(root->left,ans);
    leafNodes(root->right,ans);
    }
    
    void rightTree(Node *root,vector<int> &ans){
        if((root==NULL)|| (root->left==NULL && root->right==NULL)){
            return;
        }
        if(root->right){
            rightTree(root->right,ans);
        }
        else{
            rightTree(root->left,ans);
        }
        ans.push_back(root->data);
    }
    
    
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        ans.push_back(root->data);
        leftTree(root->left,ans);
        leafNodes(root->left,ans);
        leafNodes(root->right,ans);
        rightTree(root->right,ans);
        return ans;
    }
};