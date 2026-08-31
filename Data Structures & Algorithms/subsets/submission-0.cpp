class Solution {
public:
    vector<vector<int>> op;
    vector<int> current;

    void solve(vector<int>& nums, int i) {
        op.push_back(current);
        int n = nums.size();
        // if (current.size() == n) return;
        for (int j = i; j < n; j++) {
            current.push_back(nums[j]);
            solve(nums, j+1);
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums,0);
        return op;
    }
};
