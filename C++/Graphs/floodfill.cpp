#include<iostream>
#include<vector>

using namespace std;

void dfs(vector<vector<int>> &image,int currRow,int currCol ,int initialColor,int newColor){
     int n = image.size();
     int m = image[0].size();
     if(currRow <0 || currCol<0 || currRow>=n || currCol>=m) return;
     if(image[currRow][currCol]!= initialColor) return;
     image[currRow][currCol] = newColor;
     dfs(image,currRow+1,currCol,initialColor,newColor);//down
     dfs(image,currRow,currCol-1,initialColor,newColor);//left
     dfs(image,currRow-1,currCol,initialColor,newColor);//up
     dfs(image,currRow,currCol+1,initialColor,newColor);//right


}
vector<vector<int>> floodfill(vector<vector<int>> &image,int sr,int sc ,int color){
    if(color ==image[sr][sc]) return image;
    dfs(image,sr,sc,image[sr][sc],color);
    return image;
}

int main(){
vector<vector<int>> image ={{1,1,1},
                            {1,1,0},
                            {1,0,0}};
int sr =1;
int sc =1;
int color =2;
vector<vector<int>> r =floodfill(image,sr,sc,color);
for(auto ele :r){
    for(auto k: ele){
        cout<<k<<" ";
    }
    cout<<endl;
}


    return 0;
}