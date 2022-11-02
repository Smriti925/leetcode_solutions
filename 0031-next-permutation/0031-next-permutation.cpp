class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int bp=-1;
        
        for (int i = nums.size() - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            bp = i - 1;
            break;
        }
    }
        if(bp<0) {
                reverse(nums.begin(), nums.end());
                 return;
                 }
        for(int i=nums.size()-1;i>=0;i--)
           { if (nums[i] > nums[bp]){
               swap(nums[bp], nums[i]);
                reverse(nums.begin()+bp+1, nums.end());
            break;}}
        
    }
};