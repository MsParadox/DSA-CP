//wrong on test 9
#include <bits/stdc++.h>
using namespace std;
int main(){
string s,t;
cin>>s;
cin>>t;
int n=s.length();
int m=t.length();
string ans="";
int idx1=-1;
int idx2=-1;
for(int i=1;i<n;i++){
 for(int j=m-2;j>=0;j--){
    if(s[i]==t[j]) {
     idx1=i;
     idx2=j;
     break;
    }
 }
 if(idx1!=-1||idx2!=-1) break;
}

if(idx1==-1 ||idx2==-1) cout<<-1;
else{
for(int i=0;i<idx1;i++){
    ans+=s[i];
}
for(int j=idx2;j<m;j++){

    ans+=t[j];
}

cout<<ans;
}

	return 0;
}