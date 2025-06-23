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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        return 0;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        return max(lh,rh)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
        return 0;
        int t1=diameterOfBinaryTree(root->left);
        int t2=diameterOfBinaryTree(root->right);
        int t3=maxDepth(root->left)+maxDepth(root->right);
        return max(t1,max(t2,t3));
        }
};