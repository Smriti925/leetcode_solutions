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
    ListNode* findMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* left, ListNode* right){
        if(left==NULL) return right;
        if(right==NULL) return left;
       
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        //merge two sorted LL
        while(left!=NULL && right!=NULL){
            if(left->val < right->val){
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else{
              temp->next=right;
                temp=right;
                right=right->next;   
            }
        }
        
        while(left){
            temp->next=left;
                temp=left;
                left=left->next;
        }
        while(right){
             temp->next=right;
                temp=right;
                right=right->next;  
        }
        return ans->next;
    }
public:
    ListNode* sortList(ListNode* head) {
        if(!head ||!head->next){
            return head;
        }
        //finding mid
     ListNode* mid= findMid(head); 
        //dividing list in two parts
     ListNode* left=head;
     ListNode* right=mid->next;
     mid->next=NULL;
        //sort the two lists
    left=sortList(left);
    right=sortList(right);
        //merge the lists
        ListNode* ans=merge(left,right);
        return ans;
    }
};