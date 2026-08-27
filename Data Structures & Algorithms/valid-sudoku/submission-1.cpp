class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>>row(9,vector<bool>(9,0)), coloumn(9,vector<bool>(9,0)), block (9,vector<bool>(9,0));
        int num,b;char c;
        for( int i=0;i<9;i++)
        {
            for (int j=0;j<9;j++)
            {
                c=board[i][j];
                num=int(c)-49;
                if(num==(-3))
                    continue;
                b=(i/3)*3+(j/3);
                if(row[i][num] || coloumn[j][num] || block[b][num])
                    return 0;
                row[i][num]=1;coloumn[j][num]=1; block[b][num]=1;
            }
        }
        return 1;
    }
};
