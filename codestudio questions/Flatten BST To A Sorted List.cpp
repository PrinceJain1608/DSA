TreeNode<int>* inOrder(TreeNode<int>* root,vector<int> &in){
    if(root==NULL){
        return NULL;
    }
    inOrder(root->left,in);
    in.push_back(root->data);
    inOrder(root->right,in);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
   vector<int> inOrderVal;
   inOrder(root,inOrderVal);
   int n=inOrderVal.size();
   TreeNode<int>* newRoot=new TreeNode<int>(inOrderVal[0]);
   TreeNode<int>* curr=newRoot;
   for(int i=1;i<n;i++){
       TreeNode<int>* temp=new TreeNode<int>(inOrderVal[i]);
       curr->left=NULL;
       curr->right=temp;
       curr=temp;
   }
   curr->left=NULL;
   curr->right=NULL;
   return newRoot;
}