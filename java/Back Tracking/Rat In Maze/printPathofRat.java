public class printPathofRat {
    public static void main(String[] args) {
        int rows = 3;
        int cols = 3;
        path(0,0, rows-1,cols-1,"");
        
    }

    private static void path(int sr, int sc, int er, int ec, String s) {
        if(sr>er || sc >ec) return;
        if (sr==er && sc ==ec) {
            System.out.println(s);
            return ;
            }
         path(sr, sc+1, er, ec,s+"R");
         path(sr+1, sc, er, ec,s+"D");

    
    }
    
}
