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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
        return l2;
        if(l2==NULL)
        return l1;
        int carry=0;

        int s=0;
        ListNode* ans=new ListNode(-1);
        ListNode* newnode=ans;
        while(l1!=NULL&&l2!=NULL){
             s=l1->val+l2->val+carry;
             cout<<s<<" ";
            carry=s/10;
            s=s%10;
            ListNode* temp=new ListNode(s);
            newnode->next=temp;
            newnode=newnode->next; 
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            s=l1->val+carry;
             carry=s/10;
              cout<<s<<" ";
            s=s%10; 
            ListNode* temp=new ListNode(s);
            newnode->next=temp;
            newnode=newnode->next; 
            l1=l1->next;
        }
        while(l2!=NULL){
            s=l2->val+carry;
             carry=s/10;
            s=s%10;
              ListNode* temp=new ListNode(s);
            newnode->next=temp;
            newnode=newnode->next;
            l2=l2->next;
        }
        if(carry!=0){
            ListNode* temp =new ListNode(carry);
            newnode->next=temp;
            carry=0;
          l1=temp;
        }
        return ans->next;
    }
};