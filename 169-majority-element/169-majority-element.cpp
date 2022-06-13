class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto itr:m)
        {
            if(itr.second> (nums.size()/2))
                count=itr.first;
        }return count;
    }
};