#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
		ll n,m;
        cin>>n>>m;
        cout<<max(n,m)+1<<endl;
	}

	return 0;
}