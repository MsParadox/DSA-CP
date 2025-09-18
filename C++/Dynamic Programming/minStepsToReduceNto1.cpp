#include<iostream>
#include<vector>

#define inf INT32_MAX
using namespace std;

vector<int> dp;

int fTD(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;

    if(dp[n]!= -1) return dp[n];
    return dp[n] = 1+ min (fTD(n-1),min((n%2==0)?fTD(n/2):inf ,(n%3==0)?fTD(n/3):inf));
}

int fBU(int n){
    dp.clear();
    dp.resize(n+1,-1);
    dp[1]= 0;
    dp[2]=dp[3]=1;
    for (int i = 4; i <=n; i++)
    {
     dp[i] = 1+ min (dp[i-1],min((i%2==0)?dp[i/2]:inf ,(i%3==0)?dp[n/3]:inf));   
    }
    
    return dp[n];
}

int main(){
int n;
cin>>n;
dp.clear();
dp.resize(1005,-1);
cout<<fTD(n)<<" "<<fBU(n);

    return 0;
}