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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) 
            return head;
        ListNode* c=head;
        ListNode* f=NULL;
        ListNode* p=NULL;
      
        while(c){
            f=c->next;
            c->next=p;
            p=c;
            c=f;
        }
        return p;
       
    }
};