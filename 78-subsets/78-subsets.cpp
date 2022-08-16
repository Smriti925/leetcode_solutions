class Solution {
public:
    void solve(vector<int> nums, int i, vector<int> v,vector<vector<int>> &ans){
        if(i>=nums.size()){
            ans.push_back(v);
            return;
        }
        //exclude
        solve(nums,i+1,v,ans);
        //include
        v.push_back(nums[i]);
        solve(nums,i+1,v,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        int index=0;
        solve(nums,index,v,ans);
        return ans;
    }
};