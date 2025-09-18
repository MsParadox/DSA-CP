#include<iostream>
#include<vector>
using namespace std;
vector<pair<int,int>> internl;

void dfs(vector<vector<int>> &grid,int r,int c,int newColor,int originalColor){
  if(r<0 or c<0 or r>= grid.size() or c>=grid[0].size() or grid[r][c] != originalColor) return;
  grid[r][c]=-newColor;
  dfs(grid,r+1,c,newColor,originalColor),dfs(grid,r-1,c,newColor,originalColor),dfs(grid,r,c+1,newColor,originalColor)
  ,dfs(grid,r,c-1,newColor,originalColor);

  //below code will be executed while coming back from recursion
  if(! (r==0 or c==0 or r== grid.size()-1 or c==grid[0].size()-1 or grid[r+1][c] != -newColor or grid[r-1][c]!=-newColor
  or grid[r][c+1]!=-newColor or grid[r][c-1]!=-newColor)){
    internl.push_back({r,c});//curr cell is internal
  }
}
vector<vector<int>> colorBorder(vector<vector<int>> &grid,int row,int col,int color){
 int originalcolor = grid[row][col];
 if(originalcolor ==color) return grid;
 dfs(grid,row,col,color,originalcolor);
 for(auto p: internl){
   int i =p.first;
   int j =p.second;
   grid[i][j] =originalcolor;
 }
 for(int i=0; i<grid.size();i++){
  for(int j=0;j<grid[0].size();j++){
    if(grid[i][j]<0) grid [i][j]*=-1;
  }
 }
 return grid;
}


int main(){
vector<vector<int>> grid={{1,1,1},
                          {1,1,1},
                          {1,1,1}};
int row =1, col =1, color =2;
vector<vector<int>>  r = colorBorder(grid,row,col,color);
for(auto ele: r){
    for(int i=0;i<ele.size();i++){
      cout<<ele[i]<<" ";
    }
    cout<<endl;
}


    return 0;
}