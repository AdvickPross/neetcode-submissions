class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indices(2);
        int n = numbers.size();
        int i = 0; 
        int j = n-1;
        while (true) {
            int sum = numbers[i] + numbers[j];
            if (sum == target) {
                indices[0] = i+1;
                indices[1] = j+1;
                break;
            } else if (sum > target) {
                j--;
            } else {
                i++;
            }
        }
        return indices;
    }
};
