class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int j=0;j<s.size();j++){
            int temp=s[0];
        for(int i=0;i<s.size()-1;i++){           
                s[i]=s[i+1];
        }
            s[s.size()-1]=temp;
            if(s==goal) return true;
        }
         return false;
    }
};