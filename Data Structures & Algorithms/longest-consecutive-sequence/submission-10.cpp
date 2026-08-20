class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> uni;

        for(int i = 0; i < nums.size(); i++) {
            uni.insert(nums[i]);
        }

        int len = 1;
        int maxlen = 0;
        for (const auto& num : uni) {
            if (uni.contains(num-1)) continue;
            int n = num+1;
            while (true) {
                if (uni.contains(n)) len++;
                else {
                    if (len > maxlen) maxlen = len;
                    len = 1;
                    break;
                }
                n++;
            } 
        }
        if (len > maxlen) maxlen = len;
        return maxlen;
    }
};