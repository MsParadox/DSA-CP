//Tc O(n) and space O(n) for dp array
#include<iostream>
#include<vector>

using namespace std;


int tribo(int n){
    if(n==0) return 0;
    if(n==1 ||n==2) return 1;
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    for (int  i = 3; i <= n; i++)
    {
        dp[i] = dp[i-1]+ dp[i-2] +dp[i-3];
    }
    
    return dp[n];
}

int main(){
cout<<tribo(25);

    return 0;
}