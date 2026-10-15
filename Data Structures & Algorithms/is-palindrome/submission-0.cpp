class Solution {
public:
    bool isPalindrome(string s) {
        string pal{};
        for (const auto& ch : s) {
            char chh{static_cast<char>(tolower(ch))};
            if (chh >= 'a' && chh <= 'z' || chh >= '0' && chh <= '9') {
                pal += chh;
            }
        }
        string rev{};
        for (int i{static_cast<int>(pal.size()) - 1}; i >= 0; --i) {
            rev += pal[i];
        }
        return rev == pal;
    }
};
