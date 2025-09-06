public class deadBlockMaze {
    public static void main(String[] args) {
        int rows = 4;
        int cols = 6;
        int[][] maze ={{1,0,1,1,1,1},
                       {1,1,1,1,0,1},
                       {0,1,1,1,1,1},
                       {0,0,1,0,1,1}};
        boolean[][] isVisited = new boolean[rows][cols];//by default all values are False
        path(0,0, rows-1,cols-1,"",isVisited,maze);
        
    }

    private static void path(int sr, int sc, int er, int ec, String s, boolean[][] isVisited,int[][] maze) {
        if(sr <0 || sc<0) return;
        if(sr>er || sc >ec) return;
        if(maze[sr][sc]==0) return;
        if(isVisited[sr][sc]==true) return;
        if (sr==er && sc ==ec) {
            System.out.println(s);
            return ;
            }
            isVisited[sr][sc] = true;
         //right
            path(sr, sc+1, er, ec,s+"R",isVisited,maze);
        //down
            path(sr+1, sc, er, ec,s+"D",isVisited,maze);
         //left
            path(sr, sc-1, er, ec, s+"L",isVisited,maze);
         //Up
            path(sr-1, sc, er, ec, s+"U",isVisited,maze);
               
        //BrackTracking:-
            isVisited[sr][sc]= false;
    }
}
