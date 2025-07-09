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
TreeNode* solve(vector<int>& postorder,vector<int>& inorder,int& postindex,int start,int end){
    if(postindex<0||start>end){
        return NULL;
    }
    int ele=postorder[postindex--];
    TreeNode* root=new TreeNode(ele);
    int pos=mp[ele];
    root->right=solve(postorder,inorder,postindex,pos+1,end);
    root->left=solve(postorder,inorder,postindex,start,pos-1);
 
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
          int postindex=postorder.size()-1;
        int start=0;
        int end=inorder.size()-1;
        //inorder index
        mapping(inorder);
        return solve(postorder,inorder,postindex,start,end);

    }
};