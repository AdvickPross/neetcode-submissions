class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int pref = 1;
        output.push_back(1);
        for (int i = 1; i < nums.size(); i++) {
            pref *= nums[i-1];
            //cout << pref << " ";
            output.push_back(pref);
        }
        cout << endl;
        int suf = 1;
        //right.push_back(1);
        for (int i = nums.size() - 2; i >= 0; i--) {
            suf *= nums[i+1];
            //cout << suf << " ";
            output[i] *= suf;
        }
        // for (int i = 0; i < nums.size(); i++) {
        //     int prod = left[i] * right[i];
        //     output.push_back(prod);
        // }
        return output;
    }
};
