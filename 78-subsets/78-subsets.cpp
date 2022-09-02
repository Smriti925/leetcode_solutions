class Solution {
public:
    void solve(int i, vector<int> nums, vector<int> v, vector<vector<int>> &ans){
        if(i>=nums.size()){
            ans.push_back(v);
            return;
        }
        //exclude
        solve(i+1,nums,v,ans);
        //include
        v.push_back(nums[i]);
        solve(i+1,nums,v,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        vector<int> v;
        solve(index,nums,v,ans);
        return ans;
    }
};