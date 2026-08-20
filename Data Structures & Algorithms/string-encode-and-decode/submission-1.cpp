class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for (int i = 0; i < strs.size(); i++) {
            string siz = to_string(strs[i].size());
            s += siz + "#" + strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> output;
        //char c = s[0];
        int l = 0;
        int i = 0;
        while (i < s.size()) {
            string len = "";
            while (s[i] != '#') {
                len += s[i];
                i++;
            }
            l = stoi(len);
            string si = s.substr(i + 1, l);
            output.push_back(si);
            i += l + 1;
        }
        return output;
    }
};
