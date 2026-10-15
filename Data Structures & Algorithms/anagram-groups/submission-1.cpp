class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashIdx{};
        for (const auto& s : strs) {
            string str = s;
            ranges::sort(str);
            hashIdx[str].push_back(s);
        }
        vector<vector<string>> res{};
        for (const auto& [k, v] : hashIdx) {
            res.push_back(v);
        }
        return res;
    }
};