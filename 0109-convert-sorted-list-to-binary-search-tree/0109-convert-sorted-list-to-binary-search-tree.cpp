/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    int findlength(ListNode* head){
        int count=0;
        while(head){
            count++;
            head=head->next;
        }
        return count;
    }
    TreeNode* solve(ListNode* &head,int n){
        if(n<=0||head==NULL)
            return NULL;
        TreeNode* lefttree=solve(head,n/2);
        TreeNode* root=new TreeNode(head->val);
        root->left=lefttree;
        head=head->next;
        root->right=solve(head,n-1-n/2);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        int n =findlength(head);
        if(n==0)
        return NULL;
        return solve(head,n);
    }
};