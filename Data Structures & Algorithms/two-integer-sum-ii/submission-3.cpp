class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indices(2);
        int n = numbers.size();
        int i = 0; 
        int j = n-1;
        while (true) {
            int sum = numbers[i] + numbers[j];
            if (sum > target) {
                j--;
            } else if (sum < target) {
                i++;
            } else {
                indices[0] = i+1;
                indices[1] = j+1;
                break;
            } 
        }
        return indices;
    }
};
