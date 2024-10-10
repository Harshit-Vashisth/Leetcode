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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA;
        ListNode* b=headB;
        int  alen=0,blen=0;
        while(a->next!=NULL&&b->next!=NULL)
        {
            a=a->next;
            b=b->next;
        }
        if(a->next==NULL&&b->next==NULL&&a!=b)
        return NULL;
        if(a->next==NULL){
            blen=0;
            while(b->next!=NULL){
                blen++;
                b=b->next;
            }
        }
        if(b->next==NULL){
           alen=0;
            while(a->next!=NULL){
                alen++;
                a=a->next;
            }
        }
        while(alen!=0){
            headA=headA->next;
            alen--;
        }
        while(blen!=0){
            headB=headB->next;
            blen--;
        }
        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};