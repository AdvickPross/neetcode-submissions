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
                rows[i][board[i][j]]++;
                column[j][board[i][j]]++;
                int bnum = (i/3)*3 + (j/3);
                // if ((i >= 0) && (i <=2)) {
                //     if ((j >= 2) && (j <=5)) {
                //         bnum = 1;
                //     } else if ((j >= 6) && (j <=8)) {
                //         bnum = 2;
                //     }
                // } else if ((i >= 2) && (i <=5)) {
                //     if ((j >= 0) && (j <= 2)) {
                //         bnum = 3;
                //     } else if ((j >= 2) && (j <=5)) {
                //         bnum = 4;
                //     } else {
                //         bnum = 5;
                //     }
                // } else  {
                //     if ((j >= 0) && (j <= 2)) {
                //         bnum = 6;
                //     } else if ((j >= 2) && (j <=5)) {
                //         bnum = 7;
                //     } else {
                //         bnum = 8;
                //     }
                // }
                boxes[bnum][board[i][j]]++;
                if (rows[i][board[i][j]] > 1 || column[j][board[i][j]] > 1 || boxes[bnum][board[i][j]] > 1) {
                    flag = false;
                    break;
                }
            }
        }
        return flag;
    }
};
