class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n = temperatures.size();
        vector<int> result(n,0);
        for (int i = 0; i < n; i++) {  
            if (st.empty()) {
                st.push(i);
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
        }
        return result;
    }
};
