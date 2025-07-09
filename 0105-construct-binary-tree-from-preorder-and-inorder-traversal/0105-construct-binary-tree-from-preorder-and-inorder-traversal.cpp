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
map<int,int> mp;
void mapping(vector<int>& inorder){
    for(int i=0;i<inorder.size();i++){
        mp[inorder[i]]=i;
    }
}
TreeNode* solve(vector<int>& preorder,int& size,vector<int>& inorder,int& preindex,int start,int end){
    if(preindex>=size||start>end){
        return NULL;
    }
    int ele=preorder[preindex++];
    TreeNode* root=new TreeNode(ele);
    int pos=mp[ele];
    root->left=solve(preorder,size,inorder,preindex,start,pos-1);
    root->right=solve(preorder,size,inorder,preindex,pos+1,end);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preindex=0;
        int start=0;
        int end=inorder.size()-1;
        //inorder index
        int size=inorder.size();
        mapping(inorder);
        return solve(preorder,size,inorder,preindex,start,end);

        
    }
};