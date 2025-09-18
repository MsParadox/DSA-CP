#include<iostream>
#include<cstring>
using namespace std;
int dp[505][505];

//TD
int f(string &s1, string &s2, int i, int j){
    if(i==s1.size()) return s2.size()-j;
    if(j==s2.size()) return s1.size()-i;
    if(dp[i][j] !=-1) return dp[i][j];
    if(s1[i]==s2[j]) return dp[i][j] = f(s1,s2 ,i+1,j+1);
    return dp[i][j] = min(min(1+f(s1,s2,i+1,j+1),1+f(s1,s2,i+1,j)),1+f(s1,s2,i,j+1));
}

int minDistance(string word1 ,string word2){
    //for TD : memset(dp,-1,sizeof dp);
    
    //BU
    memset(dp ,0,sizeof dp);
    for(int j =0; j<word2.size();j++){
        int i =word1.size();
        dp[i][j] =word2.size()-j;
    }

    for(int i =0; i<word1.size();i++){
        int j =word2.size();
        dp[i][j] =word1.size()-i;
    }

    for(int i=word1.size()-1;i>=0;i--){
        for (int j = word2.size();  j>=0; j--)
        {
            if(word1[i]==word2[j]) dp[i][j] =dp[i+1][j+1];
            else dp[i][j] =min(min(1+dp[i+1][j+1],1+dp[i+1][j]),1+dp[i][j+1]);
        }
        
    }
    return dp[0][0];
    //return f(word1,word2,0,0);
}

int main(){

string word1 ="horse";
string word2 ="ros";
cout<<minDistance(word1,word2);

    return 0;
}