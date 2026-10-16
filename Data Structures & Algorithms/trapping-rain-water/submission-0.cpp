class Solution {
public:
    int trap(vector<int>& height) {
        int res{}, prevMax{};
        vector<int> pref(static_cast<int>(height.size()));
        pref[height.size() - 1] = height[height.size() - 1];
        for (int i{static_cast<int>(height.size() - 2)}; i >= 0; --i) {
            pref[i] = max(height[i], pref[i + 1]);
        }
        for (int i{}; i < height.size(); ++i) {
            prevMax = max(prevMax, height[i]);
            res += max(min(prevMax, pref[i]) - height[i], 0);
        }
        for (auto i: pref) cout << i << ' ';
        return res;
    }
};
