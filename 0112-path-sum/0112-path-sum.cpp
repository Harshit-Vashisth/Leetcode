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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
        return false;
      
        targetSum=targetSum-root->val;
        if(targetSum==0&&!root->left&&!root->right)
        return true;
        bool a1=hasPathSum(root->left, targetSum);
        bool a2=hasPathSum(root->right, targetSum);
        return a1||a2;
    }
};