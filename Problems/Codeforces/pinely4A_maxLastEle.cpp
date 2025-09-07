#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n;
        cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int left=a[0];
		int right=a[n-1];
		for(int i=0;i<n;i+=2){
			if(a[i]>left) left=a[i];
		}
		for(int i=n-1;i>=0;i-=2){
			if(a[i]>right) right=a[i];
		}
		int ans =max(left,right);
		cout<<ans<<endl;
	}


	return 0;
}