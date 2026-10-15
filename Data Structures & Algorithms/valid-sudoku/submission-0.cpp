class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9]{}, cols[9][9]{}, boxes[9][9]{};

        for (int row = 0; row < 9; ++row) {
            for (int col = 0; col < 9; ++col) {
                if (board[row][col] == '.') continue;

                int val = board[row][col] - '1';
                int box = row / 3 * 3 + col / 3;

                if (rows[row][val] || cols[col][val] || boxes[box][val]) return false;

                rows[row][val] = cols[col][val] = boxes[box][val] = true;
            }
        }
        return true;
    }
};