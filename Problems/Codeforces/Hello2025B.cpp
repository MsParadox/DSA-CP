#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
		ll n,k;
        cin>>n>>k;
        map<int,int> m;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			m[x]++;
		}
		multiset<int> ms;
		for(auto e: m){
          ms.insert(e.second);
		}
		int ans =ms.size();
		for(auto e:ms){
			if(k>=e) ans--;
			k-=e;
		}
		cout<<max(1,ans)<<endl;
	}

	return 0;
}
// 6
// 1 0
// 48843
// 1
// 3 1
// 2 3 2
// 1
// 5 3
// 1 2 3 4 5
// 2
// 7 0
// 4 7 1 3 2 4 1
// 5
// 11 4
// 3 2 1 4 4 3 4 2 1 3 3
// 2
// 5 5
// 1 2 3 4 5
// 1