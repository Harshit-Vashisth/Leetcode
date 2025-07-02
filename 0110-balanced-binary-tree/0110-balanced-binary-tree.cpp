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
    int height(TreeNode* root){
        if(!root)
        return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
        return true;

        int diff=abs(height(root->left)-height(root->right));
        int ans1=(diff<=1);
        int ans2=isBalanced(root->left);
        
        int ans3=isBalanced(root->right);
        if(ans1&&ans2&&ans3)
        return true;
        return false;
    }
};