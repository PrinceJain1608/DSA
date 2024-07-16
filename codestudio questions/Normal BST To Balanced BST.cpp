TreeNode<int>* inOrder(TreeNode<int>* root,vector<int> &in){
    if(root==NULL){
        return NULL;
    }
    inOrder(root->left,in);
    in.push_back(root->data);
    inOrder(root->right,in);
}
TreeNode<int>* inOrderToBST(int s,int e,vector<int> &in){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    TreeNode<int>* root=new TreeNode<int>(in[mid]);
    root->left=inOrderToBST(s,mid-1,in);
    root->right=inOrderToBST(mid+1,e,in);
    return root;
}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
    vector<int> inOrderVal;
    inOrder(root,inOrderVal);
    int n=inOrderVal.size()-1;
    return inOrderToBST(0,n,inOrderVal);
}