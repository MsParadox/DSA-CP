#include<iostream>
#include<vector>

using namespace std;

  void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n =board[0].size();
        vector<vector<int>> ans;
        ans=board;
        int count;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j <n; j++)
            {count=0;
            if(i>0&&board[i-1][j]==1) count++;
            if(i<m-1&&board[i+1][j]==1) count++;
            if(j>0&&board[i][j-1]==1) count++;
            if(j<n-1&&board[i][j+1]==1) count++;
            if(i>0&&j>0&&board[i-1][j-1]==1) count++;
            if(i<m-1&&j<n-1&&board[i+1][j+1]==1) count++;
            if(i<m-1&&j>0&&board[i+1][j-1]==1) count++;
            if(i>0&&j<n-1&&board[i-1][j+1]==1) count++;

            if(board[i][j]==1){
                if(count==2||count==3) ans[i][j]=1;
                else ans[i][j]=0;
            }
            else {
                if(count==3) ans[i][j]=1;
            }

             
            
                
            }
            
        }
        board=ans;

    }

int main(){




    return 0;
}