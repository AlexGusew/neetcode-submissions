class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashStrs;
        for (const auto& s: strs) {
            vector<int> counter(26);
            string hash{};
            for (const auto& ch : s) {
                counter[ch - 'a']++;
            }
            for (int i{}; i < 26; ++i) {
                hash += ',' + to_string(counter[i]);
            }
            hashStrs[hash].push_back(s);
        }
        vector<vector<string>> res{};
        for (const auto& [k,v] : hashStrs) {
            res.push_back(v);
        }
        return res;
    }
};
