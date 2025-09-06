//by Back Tracking  :-
public class fourDirectionMaze {
    public static void main(String[] args) {
        int rows = 3;
        int cols = 3;
        boolean[][] isVisited = new boolean[rows][cols];//by default all values are False
        path(0,0, rows-1,cols-1,"",isVisited);
        
    }

    private static void path(int sr, int sc, int er, int ec, String s, boolean[][] isVisited) {
        if(sr <0 || sc<0) return;
        if(sr>er || sc >ec) return;
        if(isVisited[sr][sc]==true) return;
        if (sr==er && sc ==ec) {
            System.out.println(s);
            return ;
            }
            isVisited[sr][sc] = true;
         //right
            path(sr, sc+1, er, ec,s+"R",isVisited);
        //down
            path(sr+1, sc, er, ec,s+"D",isVisited);
         //left
            path(sr, sc-1, er, ec, s+"L",isVisited);
         //Up
            path(sr-1, sc, er, ec, s+"U",isVisited);
               
        //BrackTracking:-
        isVisited[sr][sc]= false;
    }
}
