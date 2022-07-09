class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
       if(s.length()%2 !=0) 
           return false;
        for(char ch: s){
            if(ch==')' || ch==']' ||ch=='}'){
            if(st.empty())
                return false;
            else if(ch==')' && st.top()!='(')
                return false;
            else if(ch==']' && st.top()!='[')
                return false;
            else if(ch=='}' && st.top()!='{')
                return false;
            else
                st.pop();}
            else
                st.push(ch);
                
        }
        if(st.empty()) 
            return true;
        else
            return false;
    }
};