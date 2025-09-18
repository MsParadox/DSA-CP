#include<iostream>
#include<vector>
#include<cstring>
#define ll long long int

using namespace std;

ll n, m;
vector<vector<int>> mat;
ll dp[55][55][55];

ll f(ll i,ll j, ll x ,ll y){
    if(i> n or j> m or x>n or y> m or mat[i][j]==-1 or mat[i][j]==-1) return 0;
    if(i==n and j==m) {
        return mat[i][j] ==1;
    }
    if(dp[i][j][x]!= -1) return dp[i][j][x];
    ll result = INT32_MIN;

    result = max(result,f(i+1, j,x+1,y));
    result = max(result,f(i+1, j,x,y+1));
    result = max(result,f(i, j+1,x+1,y));
    result = max(result,f(i, j+1,x,y+1));
    if(result==INT32_MIN) return dp[i][j][x] =INT32_MIN;

    result+= (mat[i][j]==1);
    result+= (mat[x][y]==1);
    
    //remove repetition
    if(i==x and j==y and mat[i][j]==1) result--;

    return dp[i][j][x] =result;
}

int cherryPickup(vector<vector<int>> & grid){
    n=m=grid.size();
    memset(dp,-1,sizeof dp);
    mat.resize(55,vector<int> (55,0));
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mat[i+1][j+1] =grid[i][j];
        }
        
    }
    
    ll ans= f(1,1,1,1);
    return ans==INT32_MIN ?0 :ans;
}
int main(){
vector<vector<int>> grid={{0,1,-1},{1,0,-1},{1,1,1}};
cout<<cherryPickup(grid);


    return 0;
}