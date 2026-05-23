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
    int gcd(int a,int b){
        if(a==0) return b;
        if(b==0) return a;
        if(a==b) return a;
        if(a>b) return gcd(a-b,b);
        return gcd(a,b-a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        if(!head) return NULL;
        ListNode* temp = head;
        while(temp!=NULL and temp->next!=NULL){
            ListNode* firstEle= temp;
            ListNode* secondEle=temp->next;
            ListNode* eleToBeInserted = new ListNode(gcd(firstEle->val,secondEle->val));
            firstEle->next=eleToBeInserted;
            eleToBeInserted->next=secondEle;
            temp=secondEle;
        }
        return head;
        
    }
};