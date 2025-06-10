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
    ListNode* deletefromhead(ListNode* head){
        ListNode* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return head;
    }
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
        return head;
        if(head->next==NULL&&head->val==val)
        return NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL){
            if(curr->val==val&&prev==NULL){
                cout<<"here";
                curr=deletefromhead(curr);
                head=curr;
            }
            else if(curr->val==val){
                ListNode* temp=curr;
                curr=curr->next;
                prev->next=curr;
                temp->next=NULL;
                delete temp;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};