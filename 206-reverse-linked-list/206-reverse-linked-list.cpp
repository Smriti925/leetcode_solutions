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
    void rec(ListNode* &head, ListNode* c,ListNode* p){
        if(c==NULL){
            head=p;
            return ;
        }
        ListNode* f=c->next;
        rec(head,f,c);
        c->next=p;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* c=head;
        ListNode* p=NULL;
        rec(head,c,p);
        return head;
    }
};