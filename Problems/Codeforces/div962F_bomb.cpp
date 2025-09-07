#include <bits/stdc++.h>
#include<algorithm>
#define ll long long int
using namespace std;
ll t;
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
}
int main(){
    file_i_o();
	cin>>t;
	while(t--){
		ll n,k;
        cin>>n>>k;
        ll score=0;
        ll a[n];
        ll b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        
        while(k>0){
            int idx=0;
            ll maxi=a[0];
            for(int i=0;i<n;i++){
             if(a[i]>maxi){
                maxi=a[i];
                idx=i;
             }
              else if(a[i]==maxi &&((a[i]-b[i])>=(a[idx]-b[idx]) &&b[i]<=b[idx])){
                maxi=a[i];
                idx=i;
             }
            }
            ll ap =0;
            score +=maxi;
            a[idx]=max(ap,(a[idx]-b[idx]));
            k--;
        }
        cout<<score<<endl;


    }


	return 0;
}