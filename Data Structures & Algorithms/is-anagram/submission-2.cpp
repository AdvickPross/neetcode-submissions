class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<int,int> smap;
        unordered_map<int,int> tmap; 
        for (int i = 0; i < n; i++) {
            if (smap.contains(s[i])) smap[s[i]]++;
            else smap[s[i]] = 1;
        }
        for (int i = 0; i < m; i++) {
            if (tmap.contains(t[i])) tmap[t[i]]++;
            else tmap[t[i]] = 1;
        }
        if (m > n) smap.swap(tmap);
        for (const auto& pair : smap) {
            if (tmap[pair.first] != pair.second) return false;
        }
        return true;
    }
};
