#include<bits/stdc++.h>
using namespace std;
const int M=1e5+5;
int T,n;
int a[M];
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1);
		int p=a[1],t=2;
		while(t<=n&&a[t]%p==0)t++;
		int q=a[t];
		while(t<=n&&(a[t]%p==0||a[t]%q==0))t++;
		if(t==n+1)puts("Yes");
		else puts("No");
	}
	return 0;
}