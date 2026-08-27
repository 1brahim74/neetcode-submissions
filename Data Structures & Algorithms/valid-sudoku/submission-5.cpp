class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9] = {0};
        int col[9] = {0};
        int block[9] = {0};
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') 
                    continue;
                int mask = 1 << (board[i][j] - '0');
                int b = (i / 3) * 3 + (j / 3);
                if ((row[i] & mask) || (col[j] & mask) || (block[b] & mask)) {
                    return false;
                }
                
                row[i] |= mask;
                col[j] |= mask;
                block[b] |= mask;
            }
        }
        return true;
    }
};