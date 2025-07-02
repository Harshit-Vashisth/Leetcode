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
int solve(TreeNode* root){
    if(!root)
        return 0;
        int lh=solve(root->left);
        int rh=solve(root->right);
        return max(lh,rh)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
       
        int a1=solve(root->left);
        int a2=solve(root->right);
        int a3=a1+a2;
   
        return max(a1,max(a2,a3));
    }
};