#include<iostream>
#include<vector>
#include<climits>

using namespace std;

vector<int> coins;
vector<int> dp(1000006,-2);

int ftd(int x){
    if(x==0) return 0;
    if(dp[x] != -2) return dp[x];

    int ans = INT32_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        if(x-coins[i]<0) continue;
        ans = min(ans , ftd(x - coins[i]));
    }
    if(ans ==INT32_MAX) return dp[x]= INT32_MAX;
    return dp[x] = 1 + ans;
    
}


int main(){
int n,x;
cin>>n>>x;
for(int i =0; i<n ; i++){
    int num;
    cin>>num;
    coins.push_back(num);

}
int res =ftd(x);
if(res==INT32_MAX) cout<<"-1\n";
else cout<<res<<"\n";


    return 0;
}