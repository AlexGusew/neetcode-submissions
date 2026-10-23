class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(96);
        int i{}, res{};
        for (int j{}; j < s.size(); ++j) {
            while (mp[s[j] - ' ']) {
                --mp[s[i] - ' '];
                ++i;
            }
            res = max(res, j - i + 1);
            ++mp[s[j] - ' '];
        }
        return res;
    }
};
