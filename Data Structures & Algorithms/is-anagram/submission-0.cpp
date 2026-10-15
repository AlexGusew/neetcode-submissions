class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26);
        vector<int> vv(26);
        for (const auto ch : s) {
            v[ch - 'a']++;
        }
        for (const auto ch : t) {
            vv[ch - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            if (v[i] != vv[i]) return false;
        }
        return true;
    }
};
