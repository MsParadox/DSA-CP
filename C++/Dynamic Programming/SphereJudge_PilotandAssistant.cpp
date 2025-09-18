#include<iostream>
#include<vector>
#include<cstring>

#define ll long long int
using namespace std;

vector<ll> cap(10005,0);
vector<ll> as(10005,0);

int dp[10005][10005];
int n;
//x =assistant - captain

ll calc(int i, int x){
    if(dp[i][x]!=-1) return dp[i][x];
    if(i==n) return 0;


if(x==0) return dp[i][x] =calc(i+1,x+1)+ as[i];
else if(x==n-i) return dp[i][x] =calc(i+1,x-1)+ cap[i];
else return dp[i][x] =min(calc(i+1,x+1)+ as[i],calc(i+1,x-1)+ cap[i]);

}
int main(){
cin>>n;
for(int i=0;i<n;i++){
 cin>>cap[i]>>as[i];
}

memset(dp,-1,sizeof dp); 
cout<< as[0] +calc(1,1);


    return 0;
}