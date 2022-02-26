class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxx=arr[0];
        int index=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>maxx)
            {maxx=arr[i];
            index=i;}
        }return index;
    }
};