class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minE=INT_MAX;
        int maxp=INT_MIN;
        for(int i=0;i<prices.size();i++){
            minE=min(minE, prices[i]);
            maxp=max(maxp, prices[i]-minE);
        }return maxp;
    }
};