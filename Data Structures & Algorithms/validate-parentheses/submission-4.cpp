class Solution {
public:
    bool isValid(string s) {
        //int n = s.size();
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                if (c == 41) {
                    if (st.top() == c-1) st.pop();
                    else return false;
                } else {
                    if (st.top() == c-2) st.pop();
                    else return false;
                }
            }
        }
        if (st.empty()) return true;
        else return false;
    }
};
