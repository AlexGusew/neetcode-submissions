class Solution {
public:
    bool isPalindrome(string s) {
        string pal{};
        for (const auto& ch : s) {
            if (auto chh = tolower(ch); isalnum(chh)) {
                pal += chh;
            }
        }
        string rev{pal};
        ranges::reverse(rev);
        return rev == pal;
    }
};
