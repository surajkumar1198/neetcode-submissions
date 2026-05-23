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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

       ListNode* head=NULL;
       ListNode* temp=NULL;

       while(list1!=NULL and list2!=NULL){
         if(list1->val<list2->val){
           if(head==NULL){
             head = new ListNode(list1->val);
             list1=list1->next;
             temp=head;
           }
           else{
            ListNode* temp1= new ListNode(list1->val);
            list1=list1->next;
            temp->next=temp1;
            temp=temp1;
           }
         }
         else{
              if(head==NULL){
             head = new ListNode(list2->val);
     
             list2=list2->next;
             temp=head;
           }
           else{
            ListNode* temp1= new ListNode(list2->val);
            list2=list2->next;
            temp->next=temp1;
            temp=temp1;
           }
         }
       }
       while(list1!=NULL){
        if(head==NULL){
            head=new ListNode(list1->val);
            list1=list1->next;
            temp=head;
        }
        else{
            ListNode* temp1= new ListNode(list1->val);
            list1=list1->next;
            temp->next=temp1;
            temp=temp1;
        }
       }
       while(list2!=NULL){
        if(head==NULL){
            head=new ListNode(list2->val);
            list2=list2->next;
            temp=head;
        }
        else{
            ListNode* temp1= new ListNode(list2->val);
            list2=list2->next;
            temp->next=temp1;
            temp=temp1;
        }
       }

       return head; 
    }
};
