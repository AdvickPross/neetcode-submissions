class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        int n = s.size();
        unordered_map<char, int> hash;
        int substr = 0;
        int max = 0; 
        int start = 0;
        for (int i = 0; i < n; i++) {
            if (hash.contains(s[i]) && hash[s[i]] >= start) {
                if (substr > max) max = substr;
                start = hash[s[i]] + 1;
                substr = i - start + 1;
            } else {
                substr++;
            }
            hash[s[i]] = i;
        }
        if (substr > max) max = substr;
        return max;
    }
};
