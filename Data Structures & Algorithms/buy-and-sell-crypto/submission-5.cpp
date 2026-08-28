class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max = 0;
        int min = INT_MAX;
        for (int i = 1; i < n; i++) {
            if (prices[i-1] < min) min = prices[i-1];
            int profit = prices[i] - min;
            if (profit > max) max = profit;
        }
        return max;
    }
};
