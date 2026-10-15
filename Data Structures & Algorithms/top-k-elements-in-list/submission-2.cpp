class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> kval{};
        for (const auto i : nums) {
            kval[i]++;
        }
        vector<pair<int,int>> pairs(kval.begin(), kval.end());
        sort(pairs.begin(), pairs.end(), [](const auto a, const auto b) {
            return a.second > b.second;
        });
        
        vector<int> res;
        for (const auto [a,b] : pairs) {
            if (size(res) == k) break;
            res.push_back(a);
        }
        return res;

    }
};
