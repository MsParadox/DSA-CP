#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		ll n,k;
        cin>>n>>k;
        k--;
        if(n<63 && k>=(1LL<<n-1)){
            cout<<-1<<endl;
            continue;
        }
        vector<ll> a;
        vector<ll> b;
        
        for(ll i=n-1; i>=1; i--){
            if(k & 1){
                b.push_back(i);
            } else {
                a.push_back(i);
            }
            k/=2;
        }
        for(ll i=a.size()-1; i>=0; i--){
            cout<<a[i]<<" ";
        }
        cout<<n<<" ";
        //reverse(b.begin(), b.end());
        for(ll i=0; i<b.size(); i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
	}

	return 0;
}