//wrong code
#include<iostream>
#include<cstring>

using namespace std;
int dp[100][100];

int f(string s, string t, int i ,int j){
     if(i==s.size()) return 0;
     if(j==t.size()) return 1;
     if(dp[i][j]!=-1) return dp[i][j];
     int idx =-1;
     for (int k = j+1; k < t.size(); k++)
     {
        if(t[k]==s[i]) {
            idx=k;
            break;
        }
     }
     
     return dp[i][j] =min(f(s,t,i+1,j), 1+f(s,t,i+1,j+idx+1));
}

int shortestUncommmonSubSequece(string s, string t){
  memset(dp ,-1,sizeof dp);
  return f(s,t,0,0);
}


int main(){
 string s ="babab";
 string t ="babba";

 cout<<shortestUncommmonSubSequece(s,t);


    return 0;
}