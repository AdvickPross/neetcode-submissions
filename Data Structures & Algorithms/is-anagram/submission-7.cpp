class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<int> smap(26,0);
        vector<int> tmap(26,0); 
        for (int i = 0; i < n; i++) {
            int hashkey = (int)s[i] - 'a';
            smap[hashkey]++;
        }
        for (int i = 0; i < m; i++) {
            int hashkey = (int)t[i] - 'a';
            tmap[hashkey]++;
        }

        for (int i = 0; i < 26; i++) {
            if (smap[i] != tmap[i]) return false;
        }
        return true;
    }
};
