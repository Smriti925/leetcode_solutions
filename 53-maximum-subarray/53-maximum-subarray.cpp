class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int cursum=0;
        int maxsum=INT_MIN;
        for(int i:nums)
        {
            cursum=max(cursum+i,i);
            maxsum=max(maxsum,cursum);
        }
        return maxsum;
    }
};