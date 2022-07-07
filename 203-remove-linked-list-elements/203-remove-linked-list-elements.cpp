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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p=head;
        ListNode* q=NULL;
        while(p){
            if(p->val==val){
                if(!q){
                    head=p->next;
                }
                else{
                    q->next=p->next;
                }
            }else{
                q=p;
            }p=p->next;
        }return head;
    }
};