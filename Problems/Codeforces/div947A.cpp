#include <bits/stdc++.h>
using namespace std;
#define int long long 
int t;
signed main(){
	cin>>t;
	while(t--){
		int n,c=0;cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(i!=1&&a[i]<a[i-1]) c++;
		}
		if(a[n]>a[1]) c++;
		cout<<(c>1?"No":"Yes");
		cout<<'\n';
	}
}