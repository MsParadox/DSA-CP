//CATALAN NUMBER
#include<iostream>
#include<vector>

using namespace std;

vector<int> dp;
int ftd(int n){
    if( n==0 or n==1) return 1;
    if(n==2) return 2;
    if(dp[n] !=-1) return dp[n];
    int sum =0;
    for (int k = 1; k <=n; k++)
    {
        //k -> potential root
        sum += ftd(k-1)* ftd(n-k);//This recurance is known as CATALAN NUMBER
    }
    return dp[n] =sum;
}

int numTrees(int n){
dp.clear();

//for TD:
//dp.resize(30, -1);

//for BU
dp.resize(30, 0);
dp[0] =dp[1]=1;
dp[2] =2;
for (int i = 3; i <=n; i++)
{//f(i)
for (int k=1; k <=i; k++)
{
dp[i] += dp[k-1]*dp[i-k];
}   
}
return dp[n];
//return ftd(n);
}

int main(){
cout<<numTrees(3);


    return 0;
}