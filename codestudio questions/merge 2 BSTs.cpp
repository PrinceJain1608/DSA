//APPROACH 1   TC- O(m+n)log(m+n)
void inOrder(TreeNode *root,vector<int> &in){
    if(root==NULL){
        return;
    }
    inOrder(root->left,in);
    in.push_back(root->data);
    inOrder(root->right,in);
}
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    vector<int> ans;
    inOrder(root1,ans);
    inOrder(root2,ans);
    sort(ans.begin(),ans.end());
    return ans;
}