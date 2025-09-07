#include<iostream>
#include<vector>

using namespace std;
int minFlips(vector<vector<int>>& grid) {
       int m=grid.size();
       if(m==1) return 0;
       int n=grid[0].size();
       if(n==1) return 0;
        int r=0;
        int c= 0;
        for(int j=0;j<m;j++){
        int i=0;
        int k=n-1;
        while(i<=k){
         if(grid[j][i]!=grid[j][k]) r++;
         i++;
         k--;
        }

        }

        
        for(int i=0;i<n;i++){
        int j=0;
        int k=m-1;
        while(j<=k){
         if(grid[j][i]!=grid[k][i]) c++;
         j++;
         k--;
        }
        
        }
        

        return min(r,c);
    }

int main(){
vector<vector<int>> grid={{1},{0}};
cout<<minFlips(grid);

    return 0;
}