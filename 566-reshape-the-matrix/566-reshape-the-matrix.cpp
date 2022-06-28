class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> v(r,vector<int> (c));
            int m=mat.size();
        int n=mat[0].size();
        if(r*c!=m*n) return mat;
        int x=0,y=0;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++){
                if(y==mat[0].size()){
                    y=0;x++;
                }
                v[i][j]=mat[x][y++];
            }
        return v;
    }
};