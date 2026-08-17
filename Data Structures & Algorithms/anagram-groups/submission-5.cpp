class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            string key = "";
            vector<int> hash(26, 0);
            for (int i = 0; i < s.size(); i++) {
                int ind = s[i] - 'a';
                hash[ind]++;
            }
            for (int count : hash) {
                key += to_string(count) + "#";
            }
            if (!mpp.contains(key)) mpp[key] = {s};
            else mpp[key].push_back(s);
        }
        vector<vector<string>> answer;
        for (const auto& pair : mpp) {
            answer.push_back(pair.second);
        }
        return answer;
    }
};
