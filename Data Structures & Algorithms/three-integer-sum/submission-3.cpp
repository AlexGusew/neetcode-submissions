class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res{};
        ranges::sort(nums);
        for (int i{}; i < nums.size() - 2; ++i) {
            if (i && nums[i] == nums[i - 1]) {
                continue;
            }
            int l{i + 1}, r{static_cast<int>(nums.size()) - 1};
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum < 0) ++l;
                else if (sum > 0) --r;
                else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    while (r > l && nums[r] == nums[r - 1]) --r;
                    while (l < r && nums[l] == nums[l + 1]) ++l;
                    --r;
                    ++l;
                }
            }
        }
        return res;
    }
};
