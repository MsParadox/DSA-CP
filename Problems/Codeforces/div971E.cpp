#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k;cin>>n>>k;
    int tot=(k+k+n-1)*n/2;
    int need=tot/2;
    int l=1,r=n;
    int ans,mid;
    while(l<=r){
        mid=l+r>>1;
        if((k+k+mid-1)*mid/2>=need){
            r=mid-1;
            ans=mid;
        }
        else{
            l=mid+1;
        }
    }
    int res=1e18;
    for(int i=max(1ll,ans-1);i<=min(n,ans+1);i++){
        res=min(res,abs((k+k+i-1)*i-tot));
    }
    cout<<res<<"\n";
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        solve();
    }
}

