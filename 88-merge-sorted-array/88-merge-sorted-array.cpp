class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p=m-1;
        int q=n-1;
        int k=m+n-1;
        while(p>=0 and q>=0){
            if(nums1[p]<nums2[q]){
                nums1[k--]=nums2[q--];
            }
            else{
                nums1[k--]=nums1[p--];
            }
        }
        while(p>=0){
            nums1[k--]=nums1[p--];
        }
        while(q>=0){
            nums1[k--]=nums2[q--];
        }
    }
};