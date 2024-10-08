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
    ListNode * detect(ListNode* head){
        if(head==NULL||head->next==NULL)
            return NULL;
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast!=NULL&&fast->next!=NULL&&slow!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            return slow;
        }
        return NULL;
    
    }
    ListNode* cycle(ListNode* head, ListNode* det){
        ListNode* slow=head;
        ListNode* fast=det;
        while(slow!=fast&&slow->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
        ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
        return NULL;
        ListNode* det=detect(head);
        if(det==NULL)
        return NULL;
        return cycle(head,det);

    }
};