class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max = 0;
        int min = INT_MAX;
        for (int i = 1; i < n; i++) {
            if (prices[i-1] < min) min = prices[i-1];
            // cout << "min:" << min << " ";
            int profit = prices[i] - min;
            // cout << "i:" << i << " prices[i]:" << prices[i] << " ";
            // cout << "min:" << min << " "; 
            // cout << "profit:" << profit << endl;
            if (profit > max) max = profit;
        }
        return max;
    }
};
