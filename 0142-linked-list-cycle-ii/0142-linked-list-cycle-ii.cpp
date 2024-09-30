/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detect(ListNode* head){
         if(head==NULL)
        return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL&&slow->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            return fast;
        }
        return NULL;
    }
    ListNode* cycle(ListNode* head,ListNode* det){
         
            while(head!=det&&det->next!=NULL){
                head=head->next;
                det=det->next;
                }
        return head;
    }
      ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
        return NULL;
        ListNode *det=detect(head);
        if(det==NULL)
        return NULL;
        return cycle(head,det);

    }
};