class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        set<int> col;

        for(int i = 0; i < nums.size(); i++) {
            col.insert(nums[i]);
        }

        int len = 0;
        int maxlen = 0;
        int prev = *col.begin() - 1;
        for (const auto& num : col) {
            if (num == prev+1) {
                len++;
            } else {
                if (len > maxlen) maxlen = len;
                len = 1;
            }
            prev = num;
        }
        if (len > maxlen) maxlen = len;
        return maxlen;
    }
};