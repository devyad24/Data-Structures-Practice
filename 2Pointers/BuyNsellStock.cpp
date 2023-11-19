class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //l denotes the buy, r denotes the sell
        int l = 0;
        int r = 1;
        int max_profit = 0;

        // Sliding Window/ 2Pointer

        while(r < prices.size()){
            
            // if buying is lesser than selling, calculate profit
            if(prices[l] < prices[r]){
                max_profit = max(max_profit, prices[r] - prices[l]);
            }
            else{
            // if buying is more than selling, then l to r(selling)
                l = r;
            }
            
            r++;

        }

        return max_profit;
    }
};
