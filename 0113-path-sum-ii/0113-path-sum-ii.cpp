class Solution {
public:
    void solve(TreeNode* root,int targetSum,int sum ,vector<vector<int>> &ans,vector<int> path){
        if(root==NULL)
            return ;
        if(root->left==NULL&&root->right==NULL){
            path.push_back(root->val);
            sum+=root->val;
            if(sum==targetSum){
                ans.push_back(path);
            }
           return;
        }
        path.push_back(root->val);
        sum+=root->val;
        solve(root->left,targetSum,sum,ans,path);
        solve(root->right,targetSum,sum,ans,path);
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        solve(root,targetSum,sum,ans,temp);
        return ans;
    }
};