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
class Solution {
public:
ListNode* middle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL&&slow->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
ListNode* reverse(ListNode* head ){
    ListNode* curr=head;
    ListNode* prev=NULL;
    ListNode* next=curr->next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
        return true;
        ListNode* mid=middle(head);
        cout<<mid->val;
        ListNode* rev=reverse(mid);
        while(rev->next!=NULL){
            if(rev->val!=head->val)
            return false;
            rev=rev->next;
            head=head->next;
        }
        return true;
    }
};