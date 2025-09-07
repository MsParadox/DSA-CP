#include <bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    ll t;cin>>t;

	while(t--){
		ll n;
        cin>>n;
		vector<pair<ll,ll>> pts(n);
		for(auto& p:pts){
        cin>>p.first>>p.second;
		}
		ll xs,ys,xd,yd;
		cin>>xs>>ys>>xd>>yd;
		ll d2=(xd-xs)*(xd-xs)+(yd-ys)*(yd-ys);
		bool f=false;
		for(const auto&p :pts){
			ll dx=p.first-xd;
			ll dy=p.second-yd;
			if(d2>=dx*dx+dy*dy){
				f=true;
				break;
			}
		}
		cout<<(f?"NO":"YES")<<"\n";
	}


	return 0;
}