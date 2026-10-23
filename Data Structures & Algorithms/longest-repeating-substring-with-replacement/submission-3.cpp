class Solution {
public:
    int characterReplacement(string s, int k) {
        int res{};
        for (char ch{'A'}; ch <= 'Z'; ++ch) {
            int l{}, rest{k};
            for (int i{}; i < s.size(); ++i) {
                if (s[i] != ch) --rest;
                while (l < s.size() && rest < 0) {
                    if (s[l] != ch) ++rest;
                    ++l;
                }
                if (rest >= 0) res = max(res, i - l + 1);
            }
        }
        return res;
    }
};
