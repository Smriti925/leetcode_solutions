class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=0;
        int minPri=prices[0];
        for(int i=0;i<prices.size();i++){
            maxPro=max(maxPro,prices[i]-minPri);
            minPri=minPri>prices[i]?prices[i]:minPri;
        }return maxPro;
    }
};