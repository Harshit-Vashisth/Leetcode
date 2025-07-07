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
    void solve(TreeNode* root,int targetSum ,int sum ,vector<int> path,vector<vector<int>>& ans){
        if(!root)
        return;
        if(!root->left&&!root->right){
            sum+=root->val ;
            path.push_back(root->val);
            if(targetSum==sum){
                ans.push_back(path);
                return;
                }
                sum=sum-root->val;
                path.pop_back();
                return;
        }
        sum+=root->val;
        path.push_back(root->val);
        solve(root->left,targetSum,sum,path,ans);
        solve(root->right,targetSum,sum,path,ans);
        sum-=root->val;
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(!root)
        return ans;
        vector<int> path;
        int sum=0;
        solve(root,targetSum,sum,path,ans);
        return ans;
    }
};