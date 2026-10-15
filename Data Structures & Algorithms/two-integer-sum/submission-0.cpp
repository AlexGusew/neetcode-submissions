class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> kv{};

        for (int i = 0; i < nums.size(); ++i) {
            auto val = kv.find(nums[i]);
            if (val != kv.end()) return {val->second, i};
            kv[target - nums[i]] = i;
        }

        return {};
    }
};