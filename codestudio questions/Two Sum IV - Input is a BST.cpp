void inOrder(BinaryTreeNode<int>* root,vector<int> &in){
    if(root==NULL){
        return;
    }
    inOrder(root->left,in);
    in.push_back(root->data);
    inOrder(root->right,in);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int> inorderVal;
    inOrder(root, inorderVal);
    int i=0;
    int j=inorderVal.size()-1;
    while(i<j){
        int sum=inorderVal[i]+inorderVal[j];
        if(sum==target){
            return true;
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }        
    }
    return false;
}