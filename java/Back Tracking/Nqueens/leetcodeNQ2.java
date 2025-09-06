import java.util.ArrayList;
import java.util.List;

public class leetcodeNQ2 {
    public static void main(String[] args) {
        int n =5;
     System.out.println( totalNQueens(n));
     }
     
    private static int totalNQueens(int n) {
        List<List<String>> ans = new ArrayList<>();
        char[][] board = new char[n][n];
        for (int i = 0; i <n; i++) {
            for(int j=0; j<n; j++){
           board[i][j]='.';
        }}
        nqueens(board,0,ans);
     return ans.size();   
    }
    private static void nqueens(char[][] board, int row,List<List<String>> ans) {
        int n =board.length;
        if(row==n){
            //copy 2D array to list
            List<String> l = new ArrayList<>();
            for (int i = 0; i <n; i++) {
                String str ="";
                for(int j=0; j<n; j++){
                str+=board[i][j];
            }
            l.add(str);
         } ans.add(l);
         return;
       }
        for (int j = 0; j <n; j++) {
            if(isSafe(board,row,j)) {
                board[row][j]= 'Q';
                nqueens(board, row+1,ans);
                board[row][j]= '.'; //Back tracking
            }
        } 
    }
    private static boolean isSafe(char[][] board, int row, int col) {
        int n = board.length;
        //check row
        for (int j = 0; j <n; j++) {
        if(board[row][j]=='Q')   return false;
        }
         //check col
         for (int i = 0; i <n; i++) {
            if(board[i][col]=='Q')   return false;
            }
        //check NE
        int i = row;
        int j = col;
        while(i>=0 &&j<n){
            if(board[i][j]=='Q')   return false;
            i--;
            j++;
        }
        //check SE
         i = row;
         j = col;
        while(i<n &&j<n){
            if(board[i][j]=='Q')   return false;
            i++;
            j++;
        }
        //check SW
         i = row;
         j = col;
        while(i<n &&j>=0){
            if(board[i][j]=='Q')   return false;
            i++;
            j--;
        }
        //check Nw
         i = row;
         j = col;
        while(i>=0 &&j>=0){
            if(board[i][j]=='Q')   return false;
            i--;
            j--;
        }
    return true;
    }    
}
