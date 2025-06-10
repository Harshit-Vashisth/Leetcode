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
    int length(ListNode* &head){
        int c=0;
        if(head==NULL)
        return 0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            c++;
        }
        return c;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)
        return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=head;
        int c=0;
        int len=length(head);
        if(len<k)
        return head;
        while(c<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            c++;
        }
        //abh dekha jai toh head humari node ka tail and prev top ie headnode
        if(forward!=NULL)
            head->next=reverseKGroup(forward,k);
        return prev;
    }
};