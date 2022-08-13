class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
            v.push_back(nums1[i]);
        for(int i=0;i<nums2.size();i++)
            v.push_back(nums2[i]);
        sort(v.begin(),v.end());
        int n=v.size();
        double ans;
        if(n%2==0){
            ans=(v[n/2]+v[(n/2)-1])/2.0;
            return ans;
        }
        else{
            ans=v[n/2];
            return ans;
        }
        
    }
};