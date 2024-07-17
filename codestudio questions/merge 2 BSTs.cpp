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

//APPROACH 2
void inOrder(TreeNode *root,vector<int> &in){
    if(root==NULL){
        return;
    }
    inOrder(root->left,in);
    in.push_back(root->data);
    inOrder(root->right,in);
}
vector<int> mergeArrays(vector<int> &arr1,vector<int> &arr2){
    vector<int> ans(arr1.size()+arr2.size());
    int i=0,j=0,k=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            ans[k++]=arr1[i++];
        }
        else{
            ans[k++]=arr2[j++];
        }
    }
    while(i<arr1.size()){
        ans[k++]=arr1[i++];
    }
    while(j<arr2.size()){
        ans[k++]=arr2[j++];
    }
    return ans;
}
TreeNode *inOrderToBST(int s,int e,vector<int> &in){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    TreeNode *root=new TreeNode(in[mid]);
    root->left=inOrderToBST(s,mid-1,in);
    root->right=inOrderToBST(mid+1,e,in);
    return root;
}
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
   vector<int> bst1,bst2;
   inOrder(root1,bst1);
   inOrder(root2,bst2);
   vector<int>merge=mergeArrays(bst1,bst2);
   int s=0;
   int e=merge.size()-1;
   return inOrderToBST(s,e,merge); 
}

//APPROACH 3
// step1- convert BST into sorted doubly LL in place
// step2- merge 2 sorted LL
// step 3- convert sorted LL into BST