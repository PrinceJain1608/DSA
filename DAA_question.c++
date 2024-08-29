class Solution{
  public:
    void inorderTraversal(Node* root, vector<int> &in){
        if(root == NULL) return;
        // LNR
        inorderTraversal(root->left, in);
        in.push_back(root->data);
        inorderTraversal(root->right, in);
    }
    
    void replaceBSTtoHeapUsingPostorder(Node* root, vector<int>&in, int &i){
        if(root == NULL) return;
        
        //LRN
        replaceBSTtoHeapUsingPostorder(root->left, in, i);
        replaceBSTtoHeapUsingPostorder(root->right, in, i);
        root->data = in[i];
        i++;
    }
  
    void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        // Inorder to store the bst value in sorrted way
        vector<int> inOrder;
        inorderTraversal(root, inOrder);
        
        // Postorder to conert the tree into Heap
        int index = 0;
        replaceBSTtoHeapUsingPostorder(root, inOrder, index);
    }    
};