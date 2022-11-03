class Solution
{
    public:
        void nextPermutation(vector<int> &nums)
        {
            int i = nums.size() - 1;
            while (i > 0 and nums[i] <= nums[i - 1])
            {
                i--;
            }

            if (i == 0) sort(nums.begin(), nums.end());
            else
            {
                int temp = i - 1;
                i = nums.size() - 1;
                while (nums[temp] >= nums[i])
                {
                    i--;
                }
                swap(nums[temp], nums[i]);
                sort(nums.begin() + temp + 1, nums.end());
            }
        }
};