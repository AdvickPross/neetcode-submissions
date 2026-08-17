class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            string key = s;
            sort(key.begin(), key.end());
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
