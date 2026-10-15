class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int l{}; l < numbers.size() - 1; ++l) {
            int t{target - numbers[l]};
            int i{l + 1}, j{static_cast<int>(numbers.size() - 1)};
            while (i < j) {
                int m{(i + j) / 2};
                if (numbers[m] < t) i = m + 1;
                else if (numbers[m] > t) j = m;
                else return {l + 1, m + 1};
            }
            if (numbers[i] == t) return {l + 1, i + 1};
        }
        return {};
    }
};
