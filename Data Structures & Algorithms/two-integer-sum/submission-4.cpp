class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            if (!mpp.contains(nums[i])) mpp[nums[i]] = i;
            int num = target - nums[i];
            if (mpp.contains(num) && mpp[num] != i) return {mpp[num],i};
        }
    }
};
