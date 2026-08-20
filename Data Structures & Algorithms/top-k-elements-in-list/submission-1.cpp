class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int hash = nums[i];
            if (!mpp.contains(hash)) mpp[hash] = 1;
            else mpp[hash]++;
        }
        multimap<int,int> invert;
        for (const auto& pair : mpp) {
            invert.insert({pair.second, pair.first});
        }
        auto it = invert.rbegin();
        vector<int> answer;
        for (int i = 0; i < k; i++) {
            answer.push_back(it->second);
            ++it;
        }
        return answer;
    }
};
