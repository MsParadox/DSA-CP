#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;cin>>n;
    set<pair<int,int>> s;
    int ans=0;
    int k=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(y)
        {if(s.find({x,y-1})!=s.end()) k++;}
        else {
            if(s.find({x,y+1})!=s.end()) k++;
        }
        
        s.insert({x,y});
        
    }
    ans+=k*(n-2);
    for(int i=0;i<n;i++){
        if(s.find({i,0})!=s.end()&&s.find({i+2,0})!=s.end()&&s.find({i+1,1})!=s.end()) ans++;
         if(s.find({i,1})!=s.end()&&s.find({i+2,1})!=s.end()&&s.find({i+1,0})!=s.end()) ans++;
    }
    
    cout<<ans<<endl;
  
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        solve();
    }
}

