class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int h=nums.size();
        while(l<h){
            int mid=l+(h-l)/2;
            if(mid!=nums[mid]){ h=mid;}
            else
                l=mid+1;
        }
        return l;
    }
};