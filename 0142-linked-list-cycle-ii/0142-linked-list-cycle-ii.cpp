/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

    ListNode* hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
            if(slow==fast)
            return slow;
        }
        return NULL;
    }

public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
        return NULL;
        ListNode* slow=head;
        ListNode* fast=hasCycle(head);
        if(fast==NULL)
        return NULL;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return fast;
    }
};