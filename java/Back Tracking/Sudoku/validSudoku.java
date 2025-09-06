public class validSudoku {
    public static void main(String[] args) {
        char[][] board = {{'5','3','.','.','7','.','.','.','.'},
                          {'6','.','.','1','9','5','.','.','.'},
                          {'.','9','8','.','.','.','.','6','.'},
                          {'8','.','.','.','6','.','.','.','3'},
                          {'4','.','.','8','.','3','.','.','1'},
                          {'7','.','.','.','2','.','.','.','6'},
                          {'.','6','.','.','.','.','2','8','.'},
                          {'.','.','.','4','1','9','.','.','5'},
                          {'.','.','.','.','8','.','.','7','9'}};
    System.out.println( isValidSudoku(board));                     
    }

    private static boolean isValidSudoku(char[][] board) {
    for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
        if(board[i][j]=='.') continue;
        char num =board[i][j];
        board[i][j]='.';
        if(isValid(board,i,j,num)==false) return false;
        board[i][j]=num;//backtracking
    }    
    }
    return true;
    }

    private static boolean isValid(char[][] board, int row, int col ,char num) {
        //check row
        for (int j = 0; j <9; j++) {
      if(board[row][j]==num) return false;      
        }
        //check col
        for (int i = 0; i<9; i++) {
                if(board[i][col]==num) return false;}
    
        //check 3X3 grid
        int srow = row/3 *3;
        int scol = col/3 *3;
        for (int i = srow; i < srow+3; i++) {
            for (int j = scol; j <scol+3; j++) {
                if(board[i][j]==num) return false;
                
            }
        }
    
    return true;
            }
}
