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
       int carry=0;
       ListNode*head=NULL;
       ListNode*temp=NULL;
       while(l1!=NULL and l2!=NULL){
         int sum = l1->val+l2->val+carry;
         carry=sum/10;
         sum=sum%10;
         ListNode* t= new ListNode(sum);
         if(head==NULL){
            head=t;
            temp=head;
         }
         else{
            temp->next=t;
            temp=t;
         }
         l1=l1->next;
         l2=l2->next;

       }
       while(l1!=NULL){
        int sum = l1->val+carry;
        carry=sum/10;
        sum=sum%10;
        ListNode* t= new ListNode(sum);
        if(head==NULL){
           head=t;
           temp=head;
        }
        else{
            temp->next=t;
            temp=t;
        }
        l1=l1->next;
       }
       while(l2!=NULL){
        int sum = l2->val+carry;
        carry=sum/10;
        sum=sum%10;
        ListNode* t= new ListNode(sum);
        if(head==NULL){
           head=t;
           temp=head;
        }
        else{
            temp->next=t;
            temp=t;
        }
        l2=l2->next;
       }
       if(carry){
        ListNode* t= new ListNode(1);
        if(head==NULL){
            head=t;
            temp=head;
        }
        else{
            temp->next=t;
            temp=t;
        }
       }
       return head;
        
    }
};
