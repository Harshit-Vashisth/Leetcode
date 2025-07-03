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
    int maxLevelSum(TreeNode* root) {
        if(!root)
        return 0;
        queue<TreeNode*> q;
        int maxi=INT_MIN;
        int flag=0;
        int l=0;
        q.push(root);
        while(!q.empty()){
            flag++;
            int temp=q.size();
            int a=0;
            for(int i=0;i<temp;i++){
                a+=q.front()->val;
                 if(q.front()->left)
                q.push(q.front()->left);
                if(q.front()->right)
                q.push(q.front()->right);
                q.pop();
            }
            if(a>maxi){
            maxi=a;
            l=flag;}
        }
        return l;
    }
};