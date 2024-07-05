class Solution
{
    public:
    pair<bool,int> sum(Node *root){
        if(root==NULL){
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        if(root->left==NULL && root->right==NULL){
            pair<bool,int> p=make_pair(true,root->data);
            return p;
        }
        pair<bool,int> leftAns=sum(root->left);
        pair<bool,int> rightAns=sum(root->right);
        bool left=leftAns.first;
        bool right=rightAns.first;
        bool condition=root->data == leftAns.second + rightAns.second;
        pair<bool,int> ans;
        if(left && right && condition){
        ans.first=true;
        ans.second=2*root->data;
        }
        else{
            ans.first=false;
        }
        return ans;
        
    }
    bool isSumTree(Node* root)
    {
         return sum(root).first;
    }
};