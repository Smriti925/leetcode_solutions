/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){//intersection
                slow=head;
            
            while(slow!=fast){//starting node of loop
                slow=slow->next;
                fast=fast->next;
            }
      
                return fast;//slow=fast
            }
        }return NULL;
    }
};