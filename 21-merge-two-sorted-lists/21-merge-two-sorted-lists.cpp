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
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
        ListNode* ans=new ListNode(-1);
        ListNode* head=ans;
        
        while(list1 && list2){
            if(list1->val <= list2->val){
                ans->next=new ListNode(list1->val);
                list1=list1->next;
                ans=ans->next;
            }else{
                ans->next=new ListNode(list2->val);
                list2=list2->next;
                ans=ans->next;
            }
        }
        if(list1!=NULL){
            ans->next=list1;
        }
        if(list2!=NULL){
            ans->next=list2;
        }
        return head->next;
    }
};