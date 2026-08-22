class Solution {
public:
    bool isPalindrome(string s) {
        bool flag = true;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (!isalnum(s[i])) {
                s.erase(i,1);
                n--;
                i--;
            }
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
        }
        for (int i = 0; i < n/2; i++)  {
            if (s[i] != s[n-i-1]) {
                flag = false;
                break;
            }
        }
        return flag;
    }
};
