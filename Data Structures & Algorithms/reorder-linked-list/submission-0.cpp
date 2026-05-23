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
    ListNode* middle(ListNode* head){
        if(head==NULL) return NULL;
        ListNode* slow =head;
        ListNode* fast = head->next;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        ListNode* current=head;
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(current!=NULL){
            temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        return prev;
    }

    // 2->4
    // 10->8->6
    void mergeNode(ListNode* head1,ListNode* head2){
        while(head1!=NULL and head2!=NULL){
            ListNode* temp1=head1->next;
            ListNode* temp2=head2->next;
            head1->next=head2;
            head2->next=temp1;
            head1=temp1;
            head2=temp2;
        }


    }
    void reorderList(ListNode* head) {
    
        ListNode* middleNode = middle(head);
        ListNode* second = middleNode->next;
        middleNode->next=NULL;
        ListNode* reversedNode = reverse(second);

        mergeNode(head,reversedNode);
        
    }
};
