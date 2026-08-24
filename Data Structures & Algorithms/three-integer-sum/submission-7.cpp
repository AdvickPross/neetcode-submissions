class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> output;
        for (int i = 0; i < n-2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
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
                    while (j < k && nums[j] == nums[j+1]) {
                        j++;
                    }
                    while (j < k && nums[k] == nums[k-1]) {
                        k--;
                    }
                    j++;
                    k--;
                }
            }
        }
        return output;
    }
};
