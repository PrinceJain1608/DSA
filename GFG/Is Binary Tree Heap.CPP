class Solution {
  public:
  int countNodes(struct Node *root){
      if(root==NULL){
          return 0;
      }
      return 1+countNodes(root->left)+countNodes(root->right);
  }
  bool isCBST(struct Node *root,int i,int cnt){
      if(root==NULL){
          return true;
      }
      if(i>=cnt){
          return false;
      }
      else{
          bool left=isCBST(root->left,2*i+1,cnt);
          bool right=isCBST(root->right,2*i+2,cnt);
          return left && right;
      }
  }
  bool isMaxOrder(struct Node *root){
      if(root->left==NULL && root->right==NULL){
          return true;
      }
      if(root->right==NULL){
          return root->data>root->left->data;
      }
      else{
          bool left=isMaxOrder(root->left);
          bool right=isMaxOrder(root->right);
          return left && right && (root->data>root->left->data && root->data>root->right->data);
      }
  }
    bool isHeap(struct Node* tree) {
        int i=0;
        int nodeCount=countNodes(tree);
        if(isCBST(tree,i,nodeCount) && isMaxOrder(tree)){
            return true;
        }
        return false;
    }