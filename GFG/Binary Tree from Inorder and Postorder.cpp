class Solution {
  public:

int Findposition(int in[] ,int inOrderStart , int inOrderEnd , int element ,int  n){
        for(int i = inOrderStart ; i<=inOrderEnd ;i++){
            if(in[i]==element){
                return i ; 
            }
        }
        return -1 ;
    }
    Node *solve(int in[],int post[],int &index,int inOrderStart,int inOrderEnd,int n){
        if(index<0 || inOrderStart>inOrderEnd){
            return NULL;
        }
        int element=post[index--];
        Node *root=new Node(element);
        int position  = Findposition(in , inOrderStart , inOrderEnd ,element, n);
        root->right=solve(in,post,index,position+1,inOrderEnd,n);
        root->left=solve(in,post,index,inOrderStart,position-1,n);

        return root;
    }
    Node *buildTree(int n, int in[], int post[]) {
       int postOrderIndex=n-1;
       Node *ans=solve(in,post,postOrderIndex,0,n-1,n);
       return ans;
    }
};