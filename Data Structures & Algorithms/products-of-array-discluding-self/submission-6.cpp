class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 0);
        int pref = 1;
        output[0] = 1;
        for (int i = 1; i < nums.size(); i++) {
            pref *= nums[i-1];
            if (pref == 0) break;
            output[i] = pref;
        }
        int suf = 1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            suf *= nums[i+1];
            output[i] *= suf;
        }
        return output;
    }
};
