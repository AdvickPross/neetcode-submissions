class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int hash = nums[i];
            //if (!mpp.contains(hash)) mpp[hash] = 1;
            mpp[hash]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for (const auto& pair : mpp) {
            bucket[pair.second].push_back(pair.first);
        }

        vector<int> answer;
        for (int i = bucket.size()-1; i > 0 && answer.size() < k; i--) {
            for (int n : bucket[i]) {
                answer.push_back(n);
                if (answer.size() == k) break;
            }
        }
        return answer;
    }
};
