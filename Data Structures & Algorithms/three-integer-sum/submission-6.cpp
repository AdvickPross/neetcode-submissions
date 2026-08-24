class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> output;
        for (int i = 0; i < n-2; i++) {
            int j = i+1;
            int k = n-1;
            int target = -1 * nums[i];
            while (j < k) {
                int sum = nums[j] + nums[k];
                if (sum > target) {
                    k--;
                } else if (sum < target) {
                    j++;
                } else {
                    output.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    //break;
                }
            }
        }
        set<vector<int>> op2(output.begin(),output.end());
        vector<vector<int>> op3(op2.begin(), op2.end());
        return op3;
    }
};
