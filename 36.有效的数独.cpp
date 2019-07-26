bool isValidSudoku(char** board, int boardRowSize, int boardColSize) {
    int col[9][9] = {0};
    int row[9][9] = {0};
    int grid[9][9] = {0};

    for (int i = 0; i < boardColSize; ++i) {
        for (int j = 0; j < boardRowSize; ++j) {
            if(board[i][j]=='.') continue;
            int n = board[i][j]-49;
            if(col[i][n]||row[j][n]||grid[3*(i/3)+j/3][n]){
                return false;
            }else{
                col[i][n]=1; row[j][n]=1; grid[3*(i/3)+j/3][n]=1;
            }
        }
    }
    return true;
}
