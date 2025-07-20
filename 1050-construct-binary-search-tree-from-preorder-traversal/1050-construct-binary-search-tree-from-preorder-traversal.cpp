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
    TreeNode* putbst(TreeNode* root,int data){
        if(root==NULL)
        return new TreeNode(data);
        if(data>root->val){
            root->right=putbst(root->right,data);
        }
        else
            root->left=putbst(root->left,data);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       TreeNode* root=NULL;
       for(int i=0;i<preorder.size();i++){
        root=putbst(root,preorder[i]);
       }
       return root;
       }

};