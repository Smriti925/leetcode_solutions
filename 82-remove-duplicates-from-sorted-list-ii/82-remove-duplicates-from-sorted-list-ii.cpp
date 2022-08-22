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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0,head);
        ListNode* p=head, *q = dummy;
        if(!head || !head->next)
            return head;
        while(p and p->next){
            if(p->val==p->next->val){
                while(p->next && p->val==p->next->val){
                    p=p->next;
                }
                q->next=p->next;
                p=p->next;
            }
            else{
               q=q->next;
                p=p->next;  
            }
            
        }
        return dummy->next;
    }
};