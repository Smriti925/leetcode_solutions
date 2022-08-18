class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2,-1);
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
                {v[0]=mid;
                h=mid-1;}
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        l=0;
        h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
                {v[1]=mid;
                l=mid+1;}
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        return v;
        
    }
};