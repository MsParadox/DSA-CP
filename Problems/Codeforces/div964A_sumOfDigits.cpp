#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n;
        cin>>n;
		int ans=n%10;
		n/=10;
		ans+=(n%10);
		cout<<ans<<endl;
	}

	return 0;
}