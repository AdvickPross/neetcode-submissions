class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char, int>> rows(9);
        vector<unordered_map<char, int>> column(9);
        vector<unordered_map<char, int>> boxes(9);
        bool flag = true;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                int bnum = (i/3)*3 + (j/3);
                if (rows[i][board[i][j]] > 0 || column[j][board[i][j]] > 0 || boxes[bnum][board[i][j]] > 0) {
                    flag = false;
                    break;
                }
                rows[i][board[i][j]]++;
                column[j][board[i][j]]++;
                boxes[bnum][board[i][j]]++;
            }
        }
        return flag;
    }
};
