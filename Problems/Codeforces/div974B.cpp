#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		ll n,k;
        cin>>n>>k;
        
        ll i = max(1LL,n-k+1);
        
        ll p=(n*(n+1)/2) -(i*(i-1)/2);

        if(p%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
       
    }

	return 0;
}
// 5
// 1 1
// 2 1
// 2 2
// 3 2
// 4 4
