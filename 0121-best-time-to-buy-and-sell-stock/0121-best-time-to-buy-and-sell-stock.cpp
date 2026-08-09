class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0 , max_profit = 0;
        int buy=0;
        

        for(int sell = 1 ; sell<n ; sell++){
            profit = prices[sell] - prices[buy];
            max_profit = max(max_profit , profit);

            if(prices[buy] > prices[sell]){
                buy = sell;
            }
        }
        return max_profit;
    }
};