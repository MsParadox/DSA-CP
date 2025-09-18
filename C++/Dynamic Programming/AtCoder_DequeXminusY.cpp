#include<iostream>
#include<cstring>
#define ll long long int

using namespace std;
ll dp[3005][3005];
ll arr[3005];

ll ftd(int i,int j){
    if(i==j ) return arr[i];
    if(dp[i][j] !=-1) return dp[i][j];

    return dp[i][j] =max(arr[i]- ftd(i+1,j), arr[j]- ftd(i, j-1));
}

ll fbu(int n){
    memset(dp,0,sizeof dp);

    for (int i = 0; i <n; i++)
    {
        dp[i][i]=arr[i];
    }
    
    for (int len = 2; len <=n; len++){
        for (int i = 0; i <= n-len; i++)
        {
          int j =i+ len -1;
          dp[i][j] = max( arr[i]- dp[i+1][j] ,arr[j]- dp[i][j-1]);        
        }
        
    }
    return dp[0][n-1];
}


int main(){
int n;
cin>>n;
for(int i =0; i<n; i++){
    cin>>arr[i];
}
//for TD
//memset(dp,-1, sizeof dp);
//cout<< ftd(0,n-1)<<endl;

//BU
cout<<fbu(n);  
    return 0;
}