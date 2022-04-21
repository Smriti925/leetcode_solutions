class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> st;
        ListNode *ini_temp = head;
      
        while(ini_temp!=NULL){
            st.push_back(ini_temp->val);
            ini_temp = ini_temp->next;
        }
        
    
        ListNode* sec_temp = head;
        int i=0;
        int flag=0;
        
        reverse(st.begin(),st.end());
        while(sec_temp!=NULL){
               if(sec_temp->val == st[i])
               {
                flag=0;
              
               }
                else 
                {
                flag=1;
                break;
                }
            sec_temp= sec_temp->next;
            i++;
        }
        if(flag==0) 
        {
            return true;
        }
        
        
        return false;
    }
};