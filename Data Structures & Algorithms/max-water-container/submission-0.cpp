class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l{}, r{static_cast<int>(heights.size() - 1)}, res{};
        while (l < r) {
            res = max(res, min(heights[l], heights[r]) * (r - l));
            if (heights[l] < heights[r]) ++l;
            else --r;
        }
        return res;
    }
};
