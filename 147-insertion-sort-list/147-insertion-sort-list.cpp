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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp=head->next;
        helper(head,temp);
        return head;
    }
    ListNode* helper(ListNode* head, ListNode* temp)
    {
        ListNode* prev=head;
        if(temp==NULL)
            return head;
        while(prev!=temp)
        {
            if(prev->val>temp->val)
                swap(prev->val, temp->val);
            prev=prev->next;
        }
        helper(head,temp->next);
        return head;
    }
};