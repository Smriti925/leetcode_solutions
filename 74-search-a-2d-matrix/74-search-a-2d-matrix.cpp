class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int row=0;
        for(int i=0;i<n;i++){
            if(matrix[i][0]<=target)
                row=i;
        }
        int l=0;
        int h=matrix[0].size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(matrix[row][mid]==target)
                return true;
            else if(matrix[row][mid]>target)
                h=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
};