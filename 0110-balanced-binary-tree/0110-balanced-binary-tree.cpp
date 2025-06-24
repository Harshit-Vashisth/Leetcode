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
    int height(TreeNode* root){
        if(root==NULL)
        return 0;
        int left=height(root->left);
        int right=height(root->right);
        return max(left,right)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        return true;

        int lh=height(root->left);
        int rh=height(root->right);
        int diff=abs(lh-rh);

    bool ans =(diff<=1);

        bool leftans=isBalanced(root->left);
        
        bool rightans=isBalanced(root->right);
        if(ans&&leftans&&rightans)
            return true;
        else
            return false;
    }
};