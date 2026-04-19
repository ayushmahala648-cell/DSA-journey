class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int profit,maxprofit=0;
        int n = prices.size();

        for(int sell=1 ; sell<n ; sell++){
            profit = prices[sell] - prices[buy];
            maxprofit = max(profit , maxprofit);
            if(prices[sell] < prices[buy]){
                buy = sell;
            }
        }
        return maxprofit;
    }
};