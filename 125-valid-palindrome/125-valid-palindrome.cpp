class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' and s[i]<='Z'){
                s[i]=s[i]+32;
            }           
        }
       
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' and s[i]<='z') || (s[i]>='0' and s[i]<='9')){
                v.push_back(s[i]);
            }
        }
      
        for(int i=0;i<v.size()/2;i++){
            if(v[i]!=v[v.size()-i-1])
                return false;
        }
        return true;
    }
};