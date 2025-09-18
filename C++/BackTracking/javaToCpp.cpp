#include<iostream>
using namespace std;

void path(int sr, int sc, int er, int ec, string s,int maze[4][6]) {
        if(sr <0 || sc<0) return;
        if(sr>er || sc >ec) return;
        if(maze[sr][sc]==0) return;
        if(maze[sr][sc]==-1) return;
        if (sr==er && sc ==ec) {
            cout<<s<<endl;
            return ;
            }


            maze[sr][sc] = -1;
         //right
            path(sr, sc+1, er, ec,s+"R",maze);
        //down
            path(sr+1, sc, er, ec,s+"D",maze);
         //left
            path(sr, sc-1, er, ec, s+"L",maze);
         //Up
            path(sr-1, sc, er, ec, s+"U",maze);
               
        //BrackTracking:-
            maze[sr][sc]= 1;
    
}

int main(){
        int rows = 4;
        int cols = 6;
        int maze[4][6] ={{1,0,1,1,1,1},
                       {1,1,1,1,0,1},
                       {0,1,1,1,1,1},
                       {0,0,1,0,1,1}};
        path(0,0, rows-1,cols-1,"",maze);
    
    
    return 0;        
    }

