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
int a=0;
    int maxi(TreeNode* root){
        if(!root)
        return a;
        a=root->val;
        maxi(root->left);
        return a;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;
        if(root->val==key){
            if(!root->left&&!root->right)
            return NULL;
            else if(!root->left&&root->right){
                TreeNode* child=root->right;
                delete root;
                return child;
            }
            else if(root->left&&!root->right){
                TreeNode* child=root->left;
                delete root;
                return child;
            }
            else{
                int inorder=maxi(root->right);
                cout<<inorder;
                root->val=inorder;
                root->right=deleteNode(root->right,inorder);
            }
            
        }
        if(root->val<key){
                root->right= deleteNode(root->right,key);
            }
        
                root->left= deleteNode(root->left,key);
          return root;
    }
};