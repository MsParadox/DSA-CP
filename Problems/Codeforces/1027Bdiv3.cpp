#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       bool f=false;
       int one=0,zero=0;
       for(int i=0;i<n;i++){
           if(s[i]=='1') one++;
           else zero++;
       }
       int mn=max(zero,one)-n/2;
       int mx=zero/2+one/2;
       if(k>=mn && !((k-mn)&1)&&k<=mx) f=true;
       cout<<(f?"Yes":"No")<<endl;
       
   }
 
    return 0;
}
