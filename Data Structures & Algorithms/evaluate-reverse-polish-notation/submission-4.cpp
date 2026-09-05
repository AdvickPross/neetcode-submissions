class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> opstack;
        int n = tokens.size();
        int op = 0;
        for (int i = 0; i < n; i++) {
            string c = tokens[i];
            if (c == "+" || c == "-" || c == "*" || c == "/") {
                int op1 = opstack.top();
                opstack.pop();
                int op2 = opstack.top();
                opstack.pop();
                int res;
                if (c == "+") {
                    res = op1 + op2;
                } else if (c == "-") {
                    res = op2 - op1;
                } else if (c == "*") {
                    res = op1 * op2;
                } else {
                    res = op2 / op1;
                }
                opstack.push(res);
            } else {
                opstack.push(stoi(c));
            }
        }
        return (opstack.top());
    }
};
