class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> m;
        for(auto c: s){m[c]++;}
        for(auto c: t){m[c]--;}
        for(auto it:m){if(it.second!=0 ) return false;}
        return true;
    }
};