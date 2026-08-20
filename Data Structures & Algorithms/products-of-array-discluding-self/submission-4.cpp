class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int pref = 1;
        output.push_back(1);
        for (int i = 1; i < nums.size(); i++) {
            pref *= nums[i-1];
            output.push_back(pref);
        }
        int suf = 1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            suf *= nums[i+1];
            output[i] *= suf;
        }
        return output;
    }
};
