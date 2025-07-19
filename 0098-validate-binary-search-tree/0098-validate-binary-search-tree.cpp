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
    bool check(TreeNode* root,long long int maxi,long long int mini){
        if(!root)return true;
        if(root->val<maxi&&root->val>mini){
             bool lh=check(root->left,root->val,mini);
            bool rh=check(root->right,maxi,root->val);
            return rh&&lh;
        }
        else return false;
       
    }
    bool isValidBST(TreeNode* root) {
        long long int maxi=2147483648;
        long long int mini=-2147483648-1;
        return check(root,maxi,mini);
    }
};