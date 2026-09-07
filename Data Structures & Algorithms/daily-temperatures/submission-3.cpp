class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n = temperatures.size();
        vector<int> result(n,0);
        // int count = 1;
        for (int i = 0; i < n; i++) {  
            if (st.empty()) {
                st.push(i);
                // count++;
                continue;
            }
            int ind = st.top();
            if (temperatures[i] <= temperatures[ind]) {
                st.push(i);
            } else {
                st.pop();
                result[ind] = i - ind;
                i--;
                continue;
            }
            // count++;
        }
        return result;
    }
};
