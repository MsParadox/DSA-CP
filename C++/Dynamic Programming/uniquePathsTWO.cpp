#include<iostream>
#include<vector>

using namespace std;
int n;
int m;
vector<vector<int> > grid,dp;

//td
int f(int i, int j){
    if(i==n-1 and j==m-1) return 1;
    if(i<0 or j<0 or i>=n or j>=m) return 0;
    if(grid[i][j]== 1) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = f(i, j+1) + f(i+1 ,j);
}

int uniquePathWithObstacles(vector<vector<int>> & obstacleGrid){
    grid = obstacleGrid;
     n= grid.size();
     m = grid[0].size();
    dp.clear();
    dp.resize(105 ,vector<int> (105,-1));
    if(grid[n-1][m-1]==1) return 0;
    
    //bu
    dp[n-1][m-1]=1;
    for(int i= n-2; i>=0;i--){
        if(grid[i][m-1]==1) dp[i][m-1]=0;
        else dp[i][m-1] =dp[i+1][m-1];
    }

    for(int i= m-2; i>=0;i--){
        if(grid[n-1][i]==1) dp[n-1][i]=0;
        else dp[n-1][i] =dp[n-1][i+1];
    }
    for(int i=n-2; i>= 0;i--){
        for( int j = m-2;j>=0; j--){
            if(grid[i][j]==1) dp[i][j]=0;
            else dp[i][j]= dp[i+1][j]+ dp[i][j+1];
        }
    }

     return dp[0][0];
    //return f(0,0);
} 

int main(){
vector<vector<int> > grid = { {0,0,0},{0,1,0},{0,0,0}};
cout<< uniquePathWithObstacles(grid);



    return 0;
}