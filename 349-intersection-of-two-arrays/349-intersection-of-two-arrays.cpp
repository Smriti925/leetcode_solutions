class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        set<int> s;
        unordered_map<int,int> m;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(m.find(nums2[i])!=m.end() && m[nums2[i]]>0){
                
                s.insert(nums2[i]);
                m[nums2[i]]--;
                
            }
        }
        for(auto i:s){
            v.push_back(i);
        }
        return v;
    }
};