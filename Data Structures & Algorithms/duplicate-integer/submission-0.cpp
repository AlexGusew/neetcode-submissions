class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> kv{};
        for (const auto i : nums) {
            kv[i]++;
        }
        for (const auto& [k, v] : kv) {
            if (v > 1) return true;
        }
        return false;
    }
};