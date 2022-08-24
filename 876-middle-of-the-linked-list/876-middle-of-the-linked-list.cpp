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
    ListNode* middleNode(ListNode* head) {
        ListNode* p=head;
        ListNode* slow=head;
        ListNode* fast=head;
        int count=0;
        while(p){
            count++;
            p=p->next;
        }
        if(count%2!=0){
            while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        }else{
        while(fast->next->next){
             slow=slow->next;
            fast=fast->next->next;
        }return slow->next;
        }
    }
};