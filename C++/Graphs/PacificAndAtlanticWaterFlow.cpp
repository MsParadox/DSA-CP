#include<iostream>
#include<vector>
#include<queue>

using namespace std;
vector<vector<int>> dir={{1,0},{-1,0},{0,1},{0,-1}};//i,j  -> i+1,j ->i-1,j ->i,j-1 ->i,j+1
int rows;
int cols;
vector<vector<int>> h;

vector<vector<bool>> bfs(queue<pair<int,int>> &qu){
  vector<vector<bool>> visited(rows,vector<bool> (cols,false));
  while(!qu.empty()){
    auto cell =qu.front();
    qu.pop();
    int i = cell.first;
    int j = cell.second;
    visited[i][j] =true;
    for(int d=0;d<4;d++){
      int newRow = i+dir[d][0];
      int newCol = j+dir[d][1];
      if(newRow<0 or newCol<0 or newRow>=rows or newCol >=cols) continue;//you exited the grid
      if(visited[newRow][newCol]) continue;
      if(h[newRow][newCol] <h[i][j]) continue;
      qu.push({newRow,newCol});
    }
  }
return visited;
}

vector<vector<int>> PacificAtlantic(vector<vector<int>> &heights){
rows=heights.size();
cols=heights[0].size();
h=heights;
queue<pair<int,int>> pacificBfs;
queue<pair<int,int>> atlanticBfs;

//Multi Source Bfs
for (int i = 0; i < rows; i++)
{
  pacificBfs.push({i,0});
  atlanticBfs.push({i,cols-1});
}

for (int i = 1; i < cols; i++)
{
  pacificBfs.push({0,i});
}

for (int j =0; j <cols-1; j++)
{
  atlanticBfs.push({rows-1,j});
}

vector<vector<bool>> pacific=bfs(pacificBfs);
vector<vector<bool>> atlantic=bfs(atlanticBfs);

vector<vector<int>> result;
for (int i = 0; i < rows; i++)
{
  for (int j = 0; j < cols;j++)
  {
    if(pacific[i][j] and atlantic[i][j]) result.push_back({i,j});
  }
  
}

return result;
}

int main(){
vector<vector<int>> heights ={{1,2,2,3,5},
                              {3,2,3,4,4},
                              {2,4,5,3,1},
                              {6,7,1,4,5},
                              {5,1,1,2,4}}; 

vector<vector<int>>  r = PacificAtlantic(heights);
for(auto ele: r){
    for(int i=0;i<ele.size();i++){
      cout<<ele[i]<<" ";
    }
    cout<<endl;
}


    return 0;
}