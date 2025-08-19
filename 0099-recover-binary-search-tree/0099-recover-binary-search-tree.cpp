/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
 
public:
 TreeNode* first=NULL;
 TreeNode* middle=NULL;
  TreeNode* second=NULL;
  TreeNode* prev;

    void inorder(TreeNode* root){
        if(!root)
        return;
        inorder(root->left);
        if(prev!=NULL&&root->val<prev->val){
            if(!first){
                first=prev;
                middle=root;
            }
            else
            second=root;
        }
        prev=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
      prev=new TreeNode(INT_MIN);
      inorder(root);
      if(!second)  swap(first->val,middle->val);
      else
      swap(first->val,second->val);
    }
};
