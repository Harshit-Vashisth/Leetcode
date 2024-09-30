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
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
    ListNode* reverseKGroup(ListNode* &head, int k) {
        if(head==NULL){
            return NULL;
        }
        int len =length(head);
        if(len<k){
            cout<<"Enter a valid number"<<endl;
            return head;
        }
        int count=0;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* forward=head->next;
    
        while(count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        if(forward!=NULL){
           head->next= reverseKGroup(forward,k);
        }
        return prev;
    }
};