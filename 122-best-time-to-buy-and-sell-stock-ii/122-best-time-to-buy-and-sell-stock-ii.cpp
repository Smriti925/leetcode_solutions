class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int stock = 0 , n = prices.size() ;
        for( int i = 0 ; i < n - 1 ; i++ )
            if( prices[i] < prices[i+1] )
                stock += prices[i+1] - prices[i] ;
        return stock ;
    }
    
};