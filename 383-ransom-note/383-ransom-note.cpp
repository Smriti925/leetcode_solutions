class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<int,int> m;
        for(auto c: ransomNote){m[c]++;}
        for(auto c: magazine){m[c]--;}
        for(auto it: m){
            if(it.second>0) 
                return false;
        }
        return true;
    }
};