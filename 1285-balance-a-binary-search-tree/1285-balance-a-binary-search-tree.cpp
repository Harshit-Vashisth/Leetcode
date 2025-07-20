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
    void storeInorder(TreeNode* root,vector<int>& inorder){
        if(root==NULL)
        return;
        storeInorder(root->left,inorder);
        inorder.push_back(root->val);
        storeInorder(root->right,inorder);
    }
    TreeNode* makebst(vector<int> inorder,int s ,int e){
        if(s>e)
        return NULL;
        int mid=s+(e-s)/2;
        TreeNode* root=new TreeNode(inorder[mid]);
        root->left=makebst(inorder,s,mid-1);
        root->right= makebst(inorder,mid+1,e);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        if(!root) return NULL;
        vector<int> inorder;
        storeInorder(root,inorder);
        int s=0;
        int e=inorder.size()-1;
       
        
        return makebst(inorder,s,e);
        
    }
};