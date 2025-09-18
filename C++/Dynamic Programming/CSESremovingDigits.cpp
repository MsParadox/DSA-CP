#include<iostream>
#include<vector>
#include<climits>

using namespace std;

vector<int> getDigits(int n){
    vector<int> result;
    while(n>0){
        if(n% 10 !=0){
            result.push_back(n%10);
        }
        n=n/10;
    }
   return result;
}

vector<int> dp;

int fTd(int n){
    if(n==0) return 0;
    if(n<=9) return 1;

    if(dp[n]!= -1) return dp[n];
    
    vector<int> d = getDigits(n);
    
    int ans =INT32_MAX;
    for(int i=0; i<d.size();i++){
        ans = min(ans, fTd(n - d[i]));
    }
    return dp[n] =1 + ans;
}

int fbu(int num){
    dp[0] =0;
    for(int i=1; i<=9; i++) dp[i] =1;
    
    for(int n=10; n<=num;n++){
    vector<int> d = getDigits(n);
    
    int ans =INT32_MAX;
    for(int i=0; i<d.size();i++){
        ans = min(ans, dp[n - d[i]]);
    }
     dp[n] =1 + ans;
    }
    return dp[num];
}


int main(){
int n;
cin>> n;
dp.clear();
dp.resize(100005,-1);
cout<<fTd(n)<<" "<<fbu(n)<<endl;

    return 0;
}