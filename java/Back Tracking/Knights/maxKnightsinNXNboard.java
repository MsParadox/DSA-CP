public class maxKnightsinNXNboard {
    static int maxKnights =-1;//global variable
    static int number = 8;
  
    private static boolean isSafe(char[][] board, int row ,int col){
    int n= board.length;
    
    int i,j;
    //2up 1 right
    i=row-2;
    j=col+1;
    if(i>=0 && j<n && board[i][j]=='K') return false;

     //2up 1 left
     i=row-2;
     j=col-1;
     if(i>=0 && j>=0 && board[i][j]=='K') return false;

    
      //2down 1 right
    i=row+2;
    j=col+1;
    if(i<n && j<n &&  board[i][j]=='K') return false;


     //2down 1 left
     i=row+2;
     j=col-1;
     if(i<n && j>=0 && board[i][j]=='K') return false;

    
     //2right 1 up
     i =row-1;
     j =col+2;
     if(i>=0 && j<n &&  board[i][j]=='K') return false;


     //2 right 1 down
      
      i =row+1;
      j =col+2;
      if(i<n && j<n &&  board[i][j]=='K') return false;


      //2 left 1 up
      i =row-1;
      j =col-2;
      if(i>=0 && j>=0 &&  board[i][j]=='K') return false;

 
      //2 left 1 down
       
       i =row+1;
       j =col-2;
       if(i<n && j>=0 && board[i][j]=='K') return false;


       return true;
 }    
    
 private static void Nknights(char[][] board, int row ,int col,int num){
int n = board.length;
if(row==n){
if(num==number){    
for (int i = 0; i <n; i++) {
        for(int j=0; j<n; j++){
        System.out.print(board[i][j]);
    }
System.out.println();
 } System.out.println(); }
 maxKnights=Math.max(maxKnights, num);
return;
}


else if(isSafe(board, row, col)){
    board[row][col]='K';

if(col!=n-1) Nknights(board, row, col+1, num+1);
 else Nknights(board, row+1,0, num+1);
 board[row][col]='x';//backtracking
}
if(col!=n-1) Nknights(board, row, col+1, num);
    else Nknights(board, row+1,0, num);


}
    public static void main(String[] args) {
    int n =4;
    char[][] board = new char[n][n];
    for (int i = 0; i <n; i++) {
        for(int j=0; j<n; j++){
       board[i][j]='x';
        }
    }
    Nknights(board, 0, 0, 0);
    System.out.println(maxKnights); 

}    
}
