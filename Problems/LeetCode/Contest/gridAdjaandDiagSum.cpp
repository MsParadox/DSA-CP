#include<iostream>
#include<vector>

using namespace std;
class neighborSum {
public:
    vector<vector<int>> arr;
    int n,m;
    neighborSum(vector<vector<int>>& grid) {
        arr=grid;
         n= grid.size();
         m= grid[0].size();
    }

    int Adjacent(int value,int r,int c){
        int ans1=0;
     if(r-1>=0) ans1+=arr[r-1][c];
     if(c-1>=0) ans1+=arr[r][c-1];
     if(r+1<=n-1) ans1+=arr[r+1][c];
     if(c+1<=m-1) ans1+=arr[r][c+1];
     return ans1; 
    }
    
    int adjacentSum(int value) {
        int adSum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==value){
                    adSum=Adjacent(value,i,j);
                    break;
                }
            }
            if(adSum!=0) break;
        }
        return adSum;
    }
    
     int diagonal(int value,int r,int c){
        int ans2=0;
     if(r-1>=0&&c-1>=0) ans2+=arr[r-1][c-1];
     if(r-1>=0&&c+1<=m-1) ans2+=arr[r-1][c+1];
     if(r+1<=n-1&&c-1>=0) ans2+=arr[r+1][c-1];
     if(r+1<=n-1&&c+1<=m-1) ans2+=arr[r+1][c+1];
     return ans2; 
    }
    int diagonalSum(int value) {
           int dSum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==value){
                    dSum=diagonal(value,i,j);
                    break;
                }
            }
            if(dSum!=0) break;
        }
        return dSum;
    }
};

int main(){
vector<vector<int>> grid={{0,1,2},{3,4,5},{6,7,8}};
neighborSum ns=neighborSum(grid);
cout<<ns.adjacentSum(1)<<endl;
cout<<ns.adjacentSum(4)<<endl;
cout<<ns.diagonalSum(4)<<endl;
cout<<ns.diagonalSum(8)<<endl;

    return 0;
}
