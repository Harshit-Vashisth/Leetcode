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
int length(ListNode* head){
    int i=1;
    while(head->next!=NULL)
    {
        head=head->next;
        i++;
    }
    return i;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
        return head;
        if(n==1&&head->next==NULL)
         return NULL;
        int l= length(head);
        if(l==n)
        {
            head=head->next;
            return head;
        }
        ListNode* curr=head;
        int i=1;
        l=l-n;
        while(i<l){
            curr=curr->next;
            i++;
        }
        ListNode* temp=curr->next;
        curr->next=curr->next->next;
        temp->next=NULL;
        delete temp;
        return head;
    }
};