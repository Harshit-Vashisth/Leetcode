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
    int maxi(TreeNode* root){
        TreeNode* temp=root;
        if(!root)return -1;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        return temp->val;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return NULL;
        if(root->val==key){
            if(!root->left&&!root->right){
            // delete root;
            return NULL;
        }
        else if(root->left&&!root->right){
        TreeNode* child=root->left;
        delete root;
        return child;}
        else if(!root->left && root->right){
            TreeNode* child=root->right;
            delete root;
            return child;
        }
        else{
            int inorderpredecessor=maxi(root->left);
            root->val=inorderpredecessor;
            root->left=deleteNode(root->left,inorderpredecessor);
            return root;
        }
    }
    else if(root->val<key)
    root->right=deleteNode(root->right,key);
    else
    root->left=deleteNode(root->left,key);
    return root;
    }
};