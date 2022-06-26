class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int ,int> m;
        int a,b;
        for(int i=0;i<nums.size();i++)
        {
            b=target-nums[i];
            if(m.find(b)!=m.end())
            {
                v.push_back(m[b]);
                v.push_back(i);
                }
            else{
                //m[nums[i]]=i;
                m.insert({nums[i],i});
            } 
        }return v;
    }
};