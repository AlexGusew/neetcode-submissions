class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashList{};
        for (const auto& s:strs) {
            string s1 {s};
            ranges::sort(s1);
            hashList[s1].push_back(s);
        }
        vector<vector<string>> res{};
        for (const auto& [k,v]:hashList) {
            res.push_back(v);
        }
        return res;
    }
};
