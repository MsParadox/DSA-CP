#include<iostream>
#include<vector>

using namespace std;
int minTaps(int n, vector<int> &ranges){
vector<int> dp(n+1, INT32_MAX);

dp[0]=0;
for (int i = 0; i <=n; i++)
{
    int start = max(0 , i-ranges[i]);
    int end = min(n , i+ranges[i]);
    int ans =INT32_MAX;
    for(int j= start; j<=end;j++){
        //dp[end]=min(dp[end],dp[j]+1);//ith tap
        ans =min(ans,dp[j]);
    }
    if(ans !=INT32_MAX) {
        dp[end] =min(dp[end],ans+1);
    }
}
return dp[n]==INT32_MAX ? -1:dp[n];
}

int main(){
    vector<int> ranges ={ 4,0,0,0,0,0,0,0,4};
    int n=8;
    cout<<minTaps(n,ranges);



    return 0;
}