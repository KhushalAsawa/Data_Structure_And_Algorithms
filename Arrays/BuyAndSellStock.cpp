/* Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
Note that you cannot sell a stock before you buy one. */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int m = INT_MAX;
        for(int i=0;i<n;i++){
            m = min(m, prices[i]);
            profit = max(prices[i]-m,profit);
        }
        return profit;
    }
};
