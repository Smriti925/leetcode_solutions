class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool res=false;
        
        unordered_map<int ,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;  
            if(m[nums[i]]>=2)
                res =true;
        }return res;
        
    }
};