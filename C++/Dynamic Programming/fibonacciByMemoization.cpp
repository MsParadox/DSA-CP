//Tc O(n) and space O(n) dp array + O(n) due to call stack
#include<iostream>
#include<vector>

using namespace std;

int helper(int n ,vector<int> &dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=helper(n-1,dp)+ helper(n-2,dp); 
}

int fibo(int n){
    vector<int> dp(n+1,-1);
    return helper(n,dp);
}




int main(){
cout<<fibo(7);

    return 0;
}