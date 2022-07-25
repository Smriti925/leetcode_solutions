class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> v;
        
        v.push_back(1);
        res.push_back(v);
        if(numRows==1){ 
            return res;
        }
         v.push_back(1);
        res.push_back(v);
        if(numRows==2){ 
            return res;
        }
       
        for(int i=3;i<=numRows;i++){
            v.clear();
            v.push_back(1);
            for(int j=1;j<i-1;j++){
                v.push_back(res[i-2][j-1]+ res[i-2][j]);   
            }
            v.push_back(1);
            res.push_back(v);
        }
        
        return res;
    }
};