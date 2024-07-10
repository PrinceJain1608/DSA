class Solution{
  public:
  void solve(Node *root,int &count,int k,vector<int> path){
      if(root==NULL){
          return;
      }
      path.push_back(root->data);
      solve(root->left,count,k,path);
      solve(root->right,count,k,path);
      int n=path.size();
      int sum=0;
      for(int j=n-1;j>=0;j--){
          sum+=path[j];
          if(sum==k){
              count++;
          }
          path.pop_back();
      }
  }
    int sumK(Node *root,int k)
    {
        vector<int> path;
        int count=0;
        solve(root,count,k,path);
        return count;
    }
};