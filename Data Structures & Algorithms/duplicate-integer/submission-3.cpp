class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //int n = nums.size();
        unordered_set<int> my_set;
        for (int i = 0; i < nums.size(); i++) {
            if (my_set.contains(nums[i])) {
                return true;
            } else {
                my_set.insert(nums[i]);
            }
        }
        return false;
    }
};